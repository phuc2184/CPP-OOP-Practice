#pragma once
#include <iostream>

using namespace std;

class Rectangle {
private:
    int width;
    int height;
    static Rectangle* rect;
    Rectangle();
public:
    void setWidth(int w);
    int getWidth();
    void setHeight(int h);
    int getHeight();
    int area();
    static Rectangle* getInstance();
};