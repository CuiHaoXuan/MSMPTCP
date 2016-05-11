// -*- Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*-

// Test client for Network Coding Protocol

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/mobility-module.h"
#include "ns3/wifi-module.h"
#include "ns3/internet-module.h"
#include "ns3/log.h"

#include <iostream>
#include <vector>
#include <cstdio>

#include "nc-coding-protocol.h"

using namespace ns3;
using namespace std;

NS_LOG_COMPONENT_DEFINE ("NetworkCodingTest");

int main(int argc, char const *argv[])
{
	LogComponentEnable ("NetworkCodingProtocol", LOG_LEVEL_INFO);

	cout << " Network Coding Test Client " << endl;
	cout << "----------------------------" << endl;

	// Coding parameters
	uint32_t packetSize = 10;
	uint32_t generationSize = 5;
	string field = "binary";

	/*
	* Wifi parameters and settings
	*/
	double rss = -93; // dBm
	string phyMode ("DsssRate1Mbps");
	// disable fragmentation for frames below 2200 bytes
	Config::SetDefault ("ns3::WifiRemoteStationManager::FragmentationThreshold",
		StringValue ("2200"));

	// turn off RTS/CTS for frames below 2200 bytes
	Config::SetDefault ("ns3::WifiRemoteStationManager::RtsCtsThreshold",
		StringValue ("2200"));

	// Fix non-unicast data rate to be the same as that of unicast
	Config::SetDefault ("ns3::WifiRemoteStationManager::NonUnicastMode",
		StringValue (phyMode));

	/*
	* Setting up the network topology and protocol layers
	*/
	NodeContainer nodes;
	nodes.Create (2);

	NS_LOG_INFO ("Nodes created.");

	WifiHelper wifi;
	wifi.SetStandard (WIFI_PHY_STANDARD_80211b);

	YansWifiPhyHelper wifiPhy = YansWifiPhyHelper::Default();
	wifiPhy.Set ("RxGain", DoubleValue(0)); // For fixed rss loss model
	wifiPhy.SetPcapDataLinkType (YansWifiPhyHelper::DLT_IEEE802_11_RADIO);

	YansWifiChannelHelper wifiChannel;
	wifiChannel.SetPropagationDelay ("ns3::ConstantSpeedPropagationDelayModel");
	// FixedRssLossModel: rss will be fixed regardless of the distance and the transmit power
	wifiChannel.AddPropagationLoss ("ns3::FixedRssLossModel","Rss", DoubleValue (rss));
	wifiPhy.SetChannel (wifiChannel.Create ());

	// Non-QoS upper MAC
	NqosWifiMacHelper wifiMac = NqosWifiMacHelper::Default ();

	wifi.SetRemoteStationManager ("ns3::ConstantRateWifiManager", "DataMode",StringValue (phyMode), "ControlMode",StringValue (phyMode));
	// Set WiFi type and configuration parameters for MAC to adhoc mode
	wifiMac.SetType ("ns3::AdhocWifiMac");

	NS_LOG_INFO ("Wifi channels created.");

	// Create net devices
	NetDeviceContainer devices = wifi.Install (wifiPhy, wifiMac, nodes);

	// Mobility model
	MobilityHelper mobility;
	Ptr<ListPositionAllocator> positionAlloc = CreateObject<ListPositionAllocator> ();
	positionAlloc->Add (Vector (0.0, 0.0, 0.0)); // Source node
	positionAlloc->Add (Vector (10.0, 0.0, 0.0)); // Sink node
	mobility.SetPositionAllocator (positionAlloc);
	mobility.SetMobilityModel ("ns3::ConstantPositionMobilityModel");
	mobility.Install (nodes);

	InternetStackHelper internet;
	internet.Install (nodes);

	Ipv4AddressHelper ipv4;
	ipv4.SetBase ("10.1.1.0", "255.255.255.0");
	Ipv4InterfaceContainer ipInterfaceContainer = ipv4.Assign (devices);

	NS_LOG_INFO ("IP stack/addresses installed.");

	// UDP Sockets
	TypeId tid = TypeId::LookupByName ("ns3::UdpSocketFactory");
	Ptr<Socket> source = Socket::CreateSocket (nodes.Get (0), tid);
	Ptr<Socket> sink = Socket::CreateSocket (nodes.Get (1), tid);

	NS_LOG_INFO ("UDP sockets created.");

	// Connect sockets
	uint16_t port = 5000;
	InetSocketAddress sourceAddr = InetSocketAddress (ipInterfaceContainer.GetAddress(0, 0), port);
	InetSocketAddress sinkAddr = InetSocketAddress (ipInterfaceContainer.GetAddress(1, 0), port);
	source->Connect (sinkAddr);
	sink->Connect (sourceAddr);

	// InetSocketAddress local = InetSocketAddress (Ipv4Address::GetAny (), port);

	sink->Bind (sinkAddr);
	source->Bind (sourceAddr);

	// Turn on global static routing
	Ipv4GlobalRoutingHelper::PopulateRoutingTables ();

	/*
	* Setting up Network Coding protocol
	*/
	NetworkCodingProtocol nc_source (source, field, generationSize, packetSize);
	NetworkCodingProtocol nc_sink (sink, field, generationSize, packetSize);

	vector<uint8_t> dataBuffer;
	dataBuffer.resize (2 * packetSize * generationSize);
	generate(dataBuffer.begin(), dataBuffer.end(), rand);
		
	// Send original packets
	nc_source.SendData (&dataBuffer, dataBuffer.size ());

	// Enable pcap tracing
	wifiPhy.EnablePcap ("nc-test", devices);


	Simulator::Run ();

	NS_LOG_INFO ("Simulator Stopped");

	Simulator::Destroy ();

	return 0;
}