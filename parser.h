#ifndef _PARSER_H_
#define _PARSER_H_

#include "listener.h"
#include "saveXML.h"

struct raw_hotspot_xml_data raw;
struct raw_sta_xml_data raw_sta;
int flag;

void getPacket(u_char * arg, const struct pcap_pkthdr * pkthdr, const u_char * packet);

int myPcapCatchAndAnaly();

void terminate();
#endif

