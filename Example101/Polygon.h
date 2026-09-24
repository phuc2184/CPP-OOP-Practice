#pragma once

class Polygon {
public:
    virtual int getWidth() = 0;
    virtual int getHeight() = 0;
    virtual int area() = 0;
    virtual void print() = 0;
};