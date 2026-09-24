#pragma once
class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle();
    Rectangle(int w, int h);
    int getWidth() const;
    int getHeight() const;
    int area() const;
};