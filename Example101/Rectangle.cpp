#include "Rectangle.h"

Rectangle::Rectangle() {
	width = 0;
	height = 0;
}
Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}
void Rectangle::setWidth(int w) {
	width = w;
}
int Rectangle::getWidth() {
	return width;
}
void Rectangle::setHeight(int h) {
	height = h;
}
int Rectangle::getHeight() {
	return height;
}
int Rectangle::area() {
	return (width * height);
}
void Rectangle::print() {
	cout << "Rectangle :";
	cout << getWidth() << "-";
	cout << getHeight() << "->";
	cout << area() << endl;
}