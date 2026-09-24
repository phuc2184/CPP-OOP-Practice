#pragma once
class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle();
    Rectangle(int w, int h);
    void setwidth(int w);
    int getwidth();
    void setHeight(int h);
    int getHeight();
    int area() const;
    bool operator < (const Rectangle& rect) const;
    bool operator > (const Rectangle& rect) const;
};