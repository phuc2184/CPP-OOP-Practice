#include "Rectangle.h"


namespace shape {
	void Rectangle::setValuess(int w, int h) {
		width = w, height = h;
	}
	int Rectangle::area() {
		return (width * height);
	}
}