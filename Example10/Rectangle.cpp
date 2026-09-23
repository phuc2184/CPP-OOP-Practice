#include "Rectangle.h"

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
