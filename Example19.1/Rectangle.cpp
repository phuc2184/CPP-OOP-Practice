#include "Rectangle.h"

Rectangle::Rectangle() {
	width = 0;
	height = 0;
}
Rectangle::Rectangle(const Rectangle& rect) {
	this->width = rect.width * 2;
	this->height = rect.height * 2;

}
Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}
int Rectangle::area() const{
	return (width * height);
}