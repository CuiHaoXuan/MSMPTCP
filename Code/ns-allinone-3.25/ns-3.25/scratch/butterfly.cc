// Butterfly Topolpgy
/*       N0          N1
         | \        / |
         |  \      /  |     
         |   \    /   |
         |    \  /    |
         |     N2     |
         |      |     |
         |      |     |
         |      |     |
         |      |     |      
         |      |     |
         |     N3     |
         |    /  \    |
         |   /    \   |
         |  /      \  |
         | /        \ |
         N5          N4
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
#include "ns3/olsr-helper.h"
#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/internet-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/applications-module.h"
#include "ns3/flow-monitor-helper.h"
#include "ns3/ipv4-global-routing-helper.h"
#include "ns3/csma-module.h"
#include "ns3/netanim-module.h"

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("ButterflyTopology");

int main(int argc, char *argv[])
{
  CommandLine cmd;
  cmd.Parse (argc, argv);
  LogComponentEnable ("UdpEchoClientApplication", LOG_LEVEL_INFO);
  LogComponentEnable ("UdpEchoServerApplication", LOG_LEVEL_INFO);
  /* Configuration. */
//*************************************************************************************
  /* Build nodes. */
  NodeContainer Nodes;
  Nodes.Create (6);
  std::cout<<"finished building nodes"<<std::endl;
//*************************************************************************************
  /* Build link. */
  CsmaHelper csma_hub;
  csma_hub.SetChannelAttribute ("DataRate", DataRateValue ((DataRate("100Mbps"))));
  csma_hub.SetChannelAttribute ("Delay",  TimeValue (MilliSeconds (2)));
  std::cout<<"finished building links"<<std::endl;
//*************************************************************************************
  /* Build link net device container. */
  NodeContainer all_hub_0;
  all_hub_0.Add (Nodes.Get(0));
  all_hub_0.Add (Nodes.Get(2));
  NetDeviceContainer ndc_hub_0 = csma_hub.Install (all_hub_0);
  NodeContainer all_hub_1;
  all_hub_1.Add (Nodes.Get(1));
  all_hub_1.Add (Nodes.Get(2));
  NetDeviceContainer ndc_hub_1 = csma_hub.Install (all_hub_1);
  NodeContainer all_hub_2;
  all_hub_2.Add (Nodes.Get(2));
  all_hub_2.Add (Nodes.Get(3));
  NetDeviceContainer ndc_hub_2 = csma_hub.Install (all_hub_2);
  NodeContainer all_hub_3;
  all_hub_3.Add (Nodes.Get(3));
  all_hub_3.Add (Nodes.Get(4));
  NetDeviceContainer ndc_hub_3 = csma_hub.Install (all_hub_3);
  NodeContainer all_hub_4;
  all_hub_4.Add (Nodes.Get(3));
  all_hub_4.Add (Nodes.Get(5));
  NetDeviceContainer ndc_hub_4 = csma_hub.Install (all_hub_4);
  NodeContainer all_hub_5;
  all_hub_5.Add (Nodes.Get(1));
  all_hub_5.Add (Nodes.Get(4));
  NetDeviceContainer ndc_hub_5 = csma_hub.Install (all_hub_5);
  NodeContainer all_hub_6;
  all_hub_6.Add (Nodes.Get(0));
  all_hub_6.Add (Nodes.Get(5));
  NetDeviceContainer ndc_hub_6 = csma_hub.Install (all_hub_6);
  std::cout<<"finished building link net device container"<<std::endl;
//*************************************************************************************
  /* Install the IP stack. */
  InternetStackHelper internetStackH;
  internetStackH.Install (Nodes);
  std::cout<<"finished installing the IP stack"<<std::endl;
//*************************************************************************************
  /* IP assign. */
  Ipv4AddressHelper ipv4;
  ipv4.SetBase ("10.0.0.0", "255.255.255.0");
  Ipv4InterfaceContainer iface_ndc_hub_0 = ipv4.Assign (ndc_hub_0);
  ipv4.SetBase ("10.0.1.0", "255.255.255.0");
  Ipv4InterfaceContainer iface_ndc_hub_1 = ipv4.Assign (ndc_hub_1);
  ipv4.SetBase ("10.0.2.0", "255.255.255.0");
  Ipv4InterfaceContainer iface_ndc_hub_2 = ipv4.Assign (ndc_hub_2);
  ipv4.SetBase ("10.0.3.0", "255.255.255.0");
  Ipv4InterfaceContainer iface_ndc_hub_3 = ipv4.Assign (ndc_hub_3);
  ipv4.SetBase ("10.0.4.0", "255.255.255.0");
  Ipv4InterfaceContainer iface_ndc_hub_4 = ipv4.Assign (ndc_hub_4);
  ipv4.SetBase ("10.0.5.0", "255.255.255.0");
  Ipv4InterfaceContainer iface_ndc_hub_5 = ipv4.Assign (ndc_hub_5);
  ipv4.SetBase ("10.0.6.0", "255.255.255.0");
  Ipv4InterfaceContainer iface_ndc_hub_6 = ipv4.Assign (ndc_hub_6);
  std::cout<<"finished IP assignment"<<std::endl; 
//*************************************************************************************
  /* Generate Route. */
  Ipv4GlobalRoutingHelper::PopulateRoutingTables ();
  //Ipv4GlobalRoutingHelper::RecomputeRoutingTables();
  Ipv4Address multicastSource ("10.0.0.1");
  Ipv4Address multicastGroup  ("225.225.225.0");
  Ipv4StaticRoutingHelper multicast;
  // Configure a (static) multicast route on node N2 (multicastRouter)
  Ptr<Node> multicastRouter = Nodes.Get (2);  // The node in question
  Ptr<NetDevice> inputIf = ndc_hub_0.Get (1); // The input NetDevice
  NetDeviceContainer outputDevices;           // A container of output NetDevices
  outputDevices.Add (ndc_hub_2.Get (0));      
  multicast.AddMulticastRoute (multicastRouter, multicastSource, 
                               multicastGroup, inputIf, outputDevices);
  // Set up a default multicast route on the sender N0 
  Ptr<Node> sender = Nodes.Get (0);
  Ptr<NetDevice> senderIf = ndc_hub_0.Get (0);
  multicast.SetDefaultMulticastRoute (sender, senderIf);

  //-------------------------------------------------------------------
  Ipv4Address multicastSource1 ("10.0.1.1");
  Ipv4Address multicastGroup1  ("225.225.225.0");
  Ipv4StaticRoutingHelper multicast1;
  // Configure a (static) multicast route on node N2 (multicastRouter)
  Ptr<Node> multicastRouter1 = Nodes.Get (2);   // The node in question
  Ptr<NetDevice> inputIf1 = ndc_hub_1.Get (1);  // The input NetDevice
  NetDeviceContainer outputDevices1;            // A container of output NetDevices
  outputDevices1.Add (ndc_hub_2.Get (0));       
  multicast1.AddMulticastRoute (multicastRouter1, multicastSource1, 
                               multicastGroup1, inputIf1, outputDevices1);
  // Set up a default multicast route on the sender n0 
  Ptr<Node> sender1 = Nodes.Get (1);
  Ptr<NetDevice> senderIf1 = ndc_hub_1.Get (0);
  multicast1.SetDefaultMulticastRoute (sender1, senderIf1);

  //------------------------------------------------------------------- 
  Ipv4Address multicastSource2 ("10.0.2.1");
  Ipv4Address multicastGroup2  ("227.225.225.0");
  Ipv4StaticRoutingHelper multicast2;
  // Configure a (static) multicast route on node N2 (multicastRouter)
  Ptr<Node> multicastRouter2 = Nodes.Get (3);   // The node in question
  Ptr<NetDevice> inputIf2 = ndc_hub_2.Get (1);  // The input NetDevice
  NetDeviceContainer outputDevices2;            // A container of output NetDevices
  outputDevices2.Add (ndc_hub_3.Get (0));
  outputDevices2.Add (ndc_hub_4.Get (0));  
  multicast2.AddMulticastRoute (multicastRouter2, multicastSource2, 
                               multicastGroup2, inputIf2, outputDevices2);
  // Set up a default multicast route on the sender n0 
  //Ptr<Node> sender2 = Nodes.Get (2);
  //Ptr<NetDevice> senderIf2 = ndc_hub_2.Get (0);
  //multicast2.SetDefaultMulticastRoute (sender2, senderIf2);
  std::cout<<"finished generating route"<<std::endl;

//*************************************************************************************
  /* Generate Application. */
  uint16_t port = 9;
  OnOffHelper onoff ("ns3::UdpSocketFactory", 
                     Address (InetSocketAddress (Ipv4Address::GetBroadcast(), port)));
  onoff.SetConstantRate (DataRate ("500kb/s"));
  ApplicationContainer app = onoff.Install (Nodes.Get(0));
  app.Start (Seconds (1.005));
  app.Stop (Seconds (5)); 
  // Create an optional packet sink to receive these packets
  PacketSinkHelper sink ("ns3::UdpSocketFactory",
                        Address (InetSocketAddress (Ipv4Address::GetAny(), port)));
  app = sink.Install (Nodes.Get (4));
  //app.Add (sink.Install (Nodes.Get (5)));
  app.Start (Seconds (1));
  app.Stop (Seconds (5));
  //--------------------------------------------------------------------------------
  uint16_t newport = 10;
  OnOffHelper onoff1 ("ns3::UdpSocketFactory", 
                     Address (InetSocketAddress (Ipv4Address::GetBroadcast(), newport)));
  onoff1.SetConstantRate (DataRate ("500kb/s"));
  ApplicationContainer app1 = onoff1.Install (Nodes.Get (1));
  app1.Start (Seconds (1));
  app1.Stop (Seconds (5)); 
  // Create an optional packet sink to receive these packets
  PacketSinkHelper sink1 ("ns3::UdpSocketFactory",
                        Address (InetSocketAddress (Ipv4Address::GetAny(), newport)));
  app1 = sink1.Install (Nodes.Get (5));
  //app1.Add (sink1.Install (Nodes.Get (4)));
  app1.Start (Seconds (1));
  app1.Stop (Seconds (5));

//*************************************************************************************
  /* Simulation. */
  /* Pcap output. */
  AsciiTraceHelper ascii;
  csma_hub.EnableAsciiAll (ascii.CreateFileStream ("butterflyTopology.tr"));
  /* Stop the simulation after x seconds. */
  //uint32_t stopTime = 100;
  //Simulator::Stop (Seconds (stopTime));
  /* Start and clean simulation. */
  AnimationInterface anim ("ButterflyTopology.xml");
  anim.SetConstantPosition (Nodes.Get(4), 45, 15);
  anim.SetConstantPosition (Nodes.Get(5), 15, 15);
  anim.SetConstantPosition (Nodes.Get(3), 30, 25);
  anim.SetConstantPosition (Nodes.Get(2), 30, 40);
  anim.SetConstantPosition (Nodes.Get(0), 15, 45);
  anim.SetConstantPosition (Nodes.Get(1), 45, 45);

  Simulator::Run ();
  Simulator::Destroy ();
}