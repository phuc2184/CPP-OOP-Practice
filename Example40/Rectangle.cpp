#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int w, int h) : width(w), height(h) {
	std::cout << "Width: " << width << std::endl;
	std::cout << "height: " << height << std::endl;
}
int Rectangle::area() {
	return (width * height);
}