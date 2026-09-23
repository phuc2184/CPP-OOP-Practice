#include "Rectangle.h"
Rectangle::Rectangle(int w, int h) {
	width = new int;
	height = new int;
	*width = w;
	*height = h;

}
void Rectangle::del() {
	delete width;
	delete height;
}
int Rectangle::area() {
	return (*width) * (*height);
}
void Rectangle::setValues(int w, int h) {
	*width = w;
	*height = h;
}
Rectangle::Rectangle(Rectangle& rect) {
	width = new int;
	height = new int;
	*width = *rect.width;
	*height = *rect.height;
}

