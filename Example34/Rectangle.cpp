#include "Rectangle.h"

bool Rectangle::operator>(Rectangle& rect) {
	return this->area() > rect.area();

}
Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}
int Rectangle::area() {
	return (width * height);
}