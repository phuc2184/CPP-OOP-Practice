#include <iostream>
#include "A.h"
#include "B.h"
using namespace std;
void shoiw(A* a) {
	a -> x();
}
void main() {
	A* a = new A();
	show(a);
	B* b = new B();
	show(b);
}