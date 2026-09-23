#include "Rectangle.h"
Rectangle::Rectangle() {
	width = 5;
	height = 20;
}
Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;

}
int Rectangle::area() {
	return (width * height);
}