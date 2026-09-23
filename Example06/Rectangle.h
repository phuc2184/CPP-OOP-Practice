#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    int width;
    int height;
public:
    static int count;
public:
    int getWidth();
    void setWidth(int width);
    int getHeight();
    void setHeight(int height);
};

#endif