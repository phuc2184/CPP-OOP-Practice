#include "Rectangle.h"
Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
}
int Rectangle::getWidth() const {
    return width;
}
int Rectangle::getHeight() const {
    return height;
}
int Rectangle::area() const {
    return width * height;
}