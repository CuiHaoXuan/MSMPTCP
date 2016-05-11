// -*- Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*-

// Test client for Network Coding Protocol with recoding

// Topology:

//    R1 ---- D1
//   /   \  /
// S      R3 
//   \   /  \
//    R2 ---- D2

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/mobility-module.h"
#include "ns3/wifi-module.h"
#include "ns3/internet-module.h"
#include "ns3/log.h"
#include "ns3/netanim-module.h"

#include <iostream>
#include <vector>
#include <cstdio>

#include "nc-coding-protocol.h"

using namespace ns3;
using namespace std;

NS_LOG_COMPONENT_DEFINE ("NetworkRecodingTest");

int main(int argc, char const *argv[])
{
	LogComponentEnable ("NetworkCodingProtocol", LOG_LEVEL_INFO);

	cout << " Network Recoding Test Client " << endl;
	cout << "----------------------------" << endl;

	// Coding parameters
	// uint32_t packetSize = 10;
	// uint32_t generationSize = 5;
	// string field = "binary";

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
	nodes.Create (6);

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
	positionAlloc->Add (Vector (0.0, 5.0, 0.0)); // Source node S
	positionAlloc->Add (Vector (10.0, 0.0, 0.0)); // Intermediate R1
	positionAlloc->Add (Vector (10.0, 10.0, 0.0)); // Intermediate R2
	positionAlloc->Add (Vector (15.0, 5.0, 0.0)); // Intermediate R3
	positionAlloc->Add (Vector (20.0, 0.0, 0.0)); // Sink D1
	positionAlloc->Add (Vector (20.0, 10.0, 0.0)); // Sink D2
	mobility.SetPositionAllocator (positionAlloc);
	mobility.SetMobilityModel ("ns3::ConstantPositionMobilityModel");
	mobility.Install (nodes);

	InternetStackHelper internet;
	internet.Install (nodes);

	Ipv4AddressHelper ipv4;
	ipv4.SetBase ("10.1.1.0", "255.255.255.0");
	Ipv4InterfaceContainer ipInterfaceContainer = ipv4.Assign (devices);

	// Turn on global static routing
	Ipv4GlobalRoutingHelper::PopulateRoutingTables ();

	NS_LOG_INFO ("IP stack, addresses and routing installed.");

	// UDP Sockets
	TypeId tid = TypeId::LookupByName ("ns3::UdpSocketFactory");
	Ptr<Socket> s = Socket::CreateSocket (nodes.Get (0), tid);
	Ptr<Socket> r1 = Socket::CreateSocket (nodes.Get (1), tid);
	Ptr<Socket> r2 = Socket::CreateSocket (nodes.Get (2), tid);
	Ptr<Socket> r3 = Socket::CreateSocket (nodes.Get (3), tid);
	Ptr<Socket> d1 = Socket::CreateSocket (nodes.Get (4), tid);
	Ptr<Socket> d2 = Socket::CreateSocket (nodes.Get (5), tid);

	uint16_t port = 5000;


	/*
	* Setting up Network Coding protocol
	*/

	// Enable pcap tracing
	wifiPhy.EnablePcap ("nc-recoding-test", devices);

	// Netanim animation output
	AnimationInterface anim ("nc-recoding-test.xml");
	anim.EnablePacketMetadata (true);

	Simulator::Run ();
	Simulator::Destroy ();

	return 0;
}