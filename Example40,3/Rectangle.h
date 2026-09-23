#pragma once
#include "Polygon.h"
class Rectangle :public Polygon {
public:
	Rectangle(int w, int h);
	int area();

};