/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */

// Class implementation for Application Layer based network coding 

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/log.h"

#include "nc-coding-protocol.h"

using namespace ns3;

NS_LOG_COMPONENT_DEFINE("NetworkCodingProtocol");


NetworkCodingProtocol::NetworkCodingProtocol (const Ptr<Socket> socket, const std::string fieldStr,
	const uint32_t generationSize, const uint32_t packetSize) :
m_socket (socket),
m_fieldStr (fieldStr),
m_genSize (generationSize),
m_packSize (packetSize)
{
	// Set field from field string
	kodocpp::field field;

	std::map<std::string,kodocpp::field> fieldMap;
	fieldMap["binary"] = kodocpp::field::binary;
	fieldMap["binary4"] = kodocpp::field::binary4;
	fieldMap["binary8"] = kodocpp::field::binary8;

	// Use binary field for bad field string or map string to field type
	if (fieldMap.find (fieldStr) == fieldMap.end ())
	{
		NS_LOG_INFO ("Incorrect field string, using binary instead.");
		field = kodocpp::field::binary;
	}
	else
		field =  fieldMap[fieldStr];

	NS_LOG_INFO ("Coding Parameters:");
	NS_LOG_INFO ("Field = " << fieldStr);
	NS_LOG_INFO ("Generation size = " << m_genSize);
	NS_LOG_INFO ("Packet size = " << m_packSize << " bytes");

	// Create encoder and decoder factories
	kodocpp::encoder_factory encoderFactory (kodocpp::codec::full_vector, field, m_genSize, m_packSize);
	kodocpp::decoder_factory decoderFactory (kodocpp::codec::full_vector, field, m_genSize, m_packSize);

	// Build encoder and decoder
	m_encoder = encoderFactory.build ();
	m_decoder = decoderFactory.build ();
	// Turn off systematic mode coding 
	m_encoder.set_systematic_off ();

	// Initialize encoder and decoder buffers
	m_encoderBuffer.resize (m_encoder.block_size ());
	m_decoderBuffer.resize (m_decoder.block_size ());

	NS_LOG_INFO ("Encoder initialized with buffer size = " << m_encoderBuffer.size () << " bytes.");
	NS_LOG_INFO ("Decoder initialized with buffer size = " << m_decoderBuffer.size () << " bytes.");

	// Set encoder source data
	m_encoder.set_const_symbols (m_encoderBuffer.data (), m_encoder.block_size ());
	// Set up encoder output payload = coded packet size + 1 custom header for packet type
	m_payload.resize (m_encoder.payload_size () + 1);

	// Set decoder data buffer
	m_decoder.set_mutable_symbols (m_decoderBuffer.data (), m_decoder.block_size ());

	// Add trace callback to decoder
	// auto callback = [](const std::string& zone, const std::string& data)
	// {
	// 	std::set<std::string> filters =
	// 	{ "decoder_state", "symbol_coefficients_before_read_symbol" };
	// 	if (filters.count (zone))
	// 	{
	// 		std::cout << zone << ":" << std::endl;
	// 		std::cout << data << std::endl;
	// 	}
	// };
	// m_decoder.set_trace_callback (callback);


	// Initialize counters
	m_sentCount = 0;
	m_recvdCount = 0;
	m_bufferedPackets = 0;

	// Initialize data members
	m_data = NULL;
	m_dataSize = 0;
	m_dataIndex = -1;

	// Set socket receive callback
	socket->SetRecvCallback (MakeCallback (&NetworkCodingProtocol::Receive, this));
}

void
NetworkCodingProtocol::SendData (std::vector<uint8_t> *data, int dataSize)
{
	// Store sending data values
	m_data = data;
	m_dataSize = dataSize;
	m_dataIndex = 0;

	NS_LOG_INFO ("Sending data of size " << m_dataSize << " bytes.");

	// Send next data block to encoder buffer
	ReadyNextDataBlock ();

	// Start sending coded block packets;
	Send ();

}

void
NetworkCodingProtocol::ReadyNextDataBlock ()
{

	if (m_dataIndex >= m_dataSize || m_data == NULL)
	{
		NS_LOG_INFO ("No data blocks remaining.");
		m_dataIndex = -1; // Indicates data sending finished
		return;
	}

	NS_LOG_INFO ("Readying block #" << m_dataIndex / m_encoder.block_size () << " for encoding.");

	if (m_dataSize - m_dataIndex <= m_encoder.block_size ())
	{
		copy (m_data->begin () + m_dataIndex, m_data->end (), m_encoderBuffer.begin ());
		m_dataIndex = m_dataSize;
		m_encoder.set_const_symbols (m_encoderBuffer.data (), m_encoder.block_size ());
	}
	else
	{
		copy (m_data->begin () + m_dataIndex,
			m_data->begin () + m_dataIndex + m_encoder.block_size (), m_encoderBuffer.begin ());
		m_dataIndex += m_encoder.block_size ();
		m_encoder.set_const_symbols (m_encoderBuffer.data (), m_encoder.block_size ());
	}

	NS_LOG_INFO ("Encoder block:");
	printByteVector(m_encoderBuffer, m_encoder.block_size ());

}

void 
NetworkCodingProtocol::SendPacket (Ptr<Packet> packet)
{
	NS_LOG_INFO ("Adding packet of " << packet->GetSize () << " bytes to encoder buffer");

	assert (packet->GetSize () == m_packSize);

	packet->CopyData (&m_encoderBuffer[m_bufferedPackets * m_packSize], m_packSize);
	m_bufferedPackets++;

	// If encoder buffer is filled send coded packet
	if (m_bufferedPackets == m_genSize) 
		Send();
}

void
NetworkCodingProtocol::Send ()
{
	// If all data sent and acknowledged do nothing
	if (m_dataIndex < 0) return;

	m_payload[0] = NC_DATA_PACKET_TYPE;
	uint32_t bytesWritten = m_encoder.write_payload (&m_payload[NC_PACKET_HEADER_SIZE]);

	Ptr<Packet> codedPacket = Create<Packet> (&m_payload[0], bytesWritten + NC_PACKET_HEADER_SIZE);
	m_socket->Send (codedPacket);
	m_sentCount++;

	NS_LOG_INFO ("Sent coded packet of " << codedPacket->GetSize () << " bytes.");

	Simulator::Schedule (Seconds (1.0), &NetworkCodingProtocol::Send, this);
}

void
NetworkCodingProtocol::Receive (Ptr<Socket> socket)
{
	// Send packet payload from socket to decoder
	std::vector<uint8_t> payload (m_decoder.payload_size () + NC_PACKET_HEADER_SIZE);
	Ptr<Packet> packet = socket->Recv ();
	m_recvdCount++;

	assert (packet->GetSize () <= NC_PACKET_HEADER_SIZE + payload.size ());

	packet->CopyData (&payload[0], packet->GetSize ());

	uint8_t packetType = payload[0];

	if (packetType == NC_DATA_PACKET_TYPE) 
	{
		NS_LOG_INFO ("Received data packet of " << packet->GetSize () << " bytes.");
		m_decoder.read_payload (&payload[NC_PACKET_HEADER_SIZE]);
		// Check if decoding is complete
		if (m_decoder.is_complete ())
		{
			NS_LOG_INFO ("---Decoding Complete---");
			NS_LOG_INFO ("Packets received = " << m_recvdCount);

			// for (std::vector<uint8_t>::const_iterator i = m_decoderBuffer.begin ();
			// 	i != m_decoderBuffer.end (); i++)
			// 	NS_LOG_INFO (std::hex << int(*i));

			// Send Ack Packet
			SendAck ();			
		}
	}
	else if (packetType == NC_ACK_PACKET_TYPE)
	{
		NS_LOG_INFO ("Received ack packet");

		ReadyNextDataBlock ();
	}
}

void
NetworkCodingProtocol::SendAck ()
{
	std::vector<uint8_t> ackPayload(NC_PACKET_HEADER_SIZE);
	ackPayload[0] = NC_ACK_PACKET_TYPE;
	Ptr<Packet> ackPacket = Create<Packet> (&ackPayload[0], ackPayload.size ());
	m_socket->Send (ackPacket);
	NS_LOG_INFO ("Ack packet sent");

	// Simulator::Stop ();
}

bool
NetworkCodingProtocol::DecodingComplete ()
{
	return m_decoder.is_complete ();
}

void
NetworkCodingProtocol::GetDecodedBlock (std::vector<uint8_t> *data)
{
	assert (data->size () >= m_decoderBuffer.size ());
	data->insert (data->begin (), m_decoderBuffer.begin (), m_decoderBuffer.end ());
}

