#include <iostream>
#include "Rectangle.h"
using namespace std;
int main(){
	Rectangle r;
	Rectangle bar(2, 3);
	r = duplicate(bar);
	cout << r.area();
	return 0;
}