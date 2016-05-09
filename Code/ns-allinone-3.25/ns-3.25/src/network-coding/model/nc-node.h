/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */

// This is the class definition for the random linear coding module
// for a node in the topology.

#pragma once

#include <kodocpp/kodocpp.hpp>

class NCNode
{

public:

	NCNode (const kodocpp::codec codeType, const kodocpp::field field,
		const uint32_t generationSize, const uint32_t packetSize);

private:

	// Private member variables network coding node arguments
	const kodocpp::codec m_codeType;
	const kodocpp::field m_field;
	const uint32_t m_genSize
	const uint32_t m_packSize;

	// Private member variables for kodo encoder/decoder and buffers
	kodocpp::encoder m_encoder;
	kodocpp::decoder m_decoder;
	std::vector<uint8_t> m_encoderBuffer;
	std::vector<uint8_t> m_decoderBuffer;

	// Private member variables for payload
	std::vector<uint8_t> m_payload;

}