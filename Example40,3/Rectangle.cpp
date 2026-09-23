#include "Polygon.h"
#include "Rectangle.h"
Rectangle ::Rectangle(int w, int h) :Polygon(w) {
	height = h;
}
int Rectangle::area() {
	return (width * height);
}