#pragma once
#include "Polygon.h"
class ShapeFactory {
public:
    static Polygon* createShape(const char type[], int width, int height);
};