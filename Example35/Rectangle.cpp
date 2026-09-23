#include "Rectangle.h"

Rectangle Rectangle::operator+=(Rectangle& rect) {
	width += rect.width;
	height += rect.height;
	return *this;
}
Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}
int Rectangle::area() {
	return (width * height);

}