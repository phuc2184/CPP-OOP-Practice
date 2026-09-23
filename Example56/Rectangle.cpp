#include <iostream>
#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle(int x, int y) :width(x), height(y){
	cout << "Width:" << width << endl;
	cout << "Height:" << height << endl;
}
int Rectangle::area(){
	return width * height;
}

Rectangle::Rectangle() {
}
Rectangle duplicate(Rectangle& param){
	Rectangle res;
	res.width = param.width * 2;
	res.height = param.height * 2;
	return res;
}