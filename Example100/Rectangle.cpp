#include "Rectangle.h"

Rectangle* Rectangle::rect = 0;
Rectangle::Rectangle() {
	width = 0;
	height = 0;
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
Rectangle* Rectangle::getInstance() {
	if (!rect) {
		rect = new Rectangle();
		return rect;
	}
}