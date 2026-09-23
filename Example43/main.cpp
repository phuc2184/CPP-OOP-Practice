#include <iostream>
#include "Network.h"
#include "USB.h"
#include "Wireless.h"
int main() {
	Wireless w(3, 4);
	std::cout << w.USB::getID();

	return 0;
}