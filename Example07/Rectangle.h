#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    int width;
    int height;
    static int count;

public:
    void setValues(int w, int h);
    static int getCount();
    static void setCount(int value);
    int area();
};

#endif