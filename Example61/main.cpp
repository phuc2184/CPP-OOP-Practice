#include "A.h"
#include "B.h"
#include <iostream>
using namespace std;
void show(A a)
{
	a.x();
}
void main()
{
	B b;
	show(b);
}