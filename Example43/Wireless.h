#pragma once
#include "Network.h"
#include "USB.h"
class Wireless : public USB, public Network {
public:
	Wireless(int uid, int nid) :USB(uid), Network(nid) {

	}
};