#include "Item.h"
#include <iostream>

void Item::setData(int value) const {
	data = value;
}
int Item::getData() const {
	return data;
}
void Item::printData() {
	std::cout << data;
}