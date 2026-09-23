#include "Item.h"
void Item::setData(int value) {
	data = value;
}
int Item::getData() const {
	return data;
}
void Item::printData() {
	cout << data;
}