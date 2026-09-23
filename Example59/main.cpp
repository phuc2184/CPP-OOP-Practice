#include "A.h"
#include "B.h"
#include <iostream>
using namespace std;
void main() {
	B b;
	A ba = b;
	ba.x();
	//ba.y(); error 
}