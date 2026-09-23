#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}
Rectangle::~Rectangle() {
	std::cout << "I Love you...Bye...Bye";
}
int Rectangle::area() {
	return width * height;
}