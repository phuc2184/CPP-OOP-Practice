#pragma once
#include "Polygon.h"
#include <iostream>
using namespace std;

class Triangle : public Polygon {
private:
    int width;
    int height;
public:
    Triangle();
    Triangle(int w, int h);
    void setWidth(int w);
    int getWidth() override;
    void setHeight(int h);
    int getHeight() override;
    int area() override;
    void print() override;
};