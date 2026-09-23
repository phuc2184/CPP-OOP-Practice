#include "Rectangle.h"

Rectangle::Rectangle() {
	width = 0;
	height = 0;
}
Rectangle Rectangle::operator+(const Rectangle& rect) const {
	Rectangle temp;
	temp.width = this->width + rect.width;
	temp.height = this->height + rect.height;
	return temp;
}
Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}
int Rectangle::area() const {
	return (width * height);
}