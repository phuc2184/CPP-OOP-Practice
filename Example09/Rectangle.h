#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    int width;
    int height;
public:
    void setWidth(int w);
    int getWidth();
    void setHeight(int h);
    int getHeight();
    int area();
};

#endif