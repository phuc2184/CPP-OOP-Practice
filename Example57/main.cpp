#include <iostream>
#include "Rectangle.h"
#include "Square.h"
using namespace std;
int main()
{
	Rectangle rect;
	Square sqr(4);
	rect.convert(sqr);
	cout << rect.area();
	return 0;
}