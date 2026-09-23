#pragma once
#include "Output.h"
#include "Polygon.h"

class Rectangle :public Polygon, public Output {
public:
	int area();
};