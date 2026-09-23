#include "A.h"
#include "B.h"
#include <iostream>
using namespace std;
int main()
{
	A* ba = new B();
	ba->x();
	ba->m();
	return 0;
}