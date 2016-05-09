/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */

// This is the class definition for the random linear coding module
// for a node in the topology.

#include "nc-node.h"

using namespace ns3;

NCNode::NCNode (const kodocpp::codec codeType, const kodocpp::field field,
	const uint32_t generationSize, const uint32_t packetSize) : 
m_codeType (codeType),
m_field (field),
m_genSize (generationSize),
m_packSize (packetSize) 
{
	// Seed pseudo random number generator
	srand(static_cast<uint32_t>time(NULL));

	// Create Kodo encoder and decoder factories
	kodocpp::encoder_factory encoderFactory (m_codeType, m_field, m_genSize, m_packSize);
	kodocpp::decoder_factory decoderFactory (m_codeType, m_field, m_genSize, m_packSize);

	// Create encoder 
	m_encoder = encoderFactory.build();
	// Turn off systematic coding
	m_encoder.set_systematic_off();

	// Initialise encoder buffer
}