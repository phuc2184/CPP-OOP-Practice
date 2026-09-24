#include "Rectangle.h"

Rectangle::Rectangle() {
}
Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
}
void Rectangle::setwidth(int w) {
    width = w;
}
int Rectangle::getwidth() {
    return width;
}
void Rectangle::setHeight(int h) {
    height = h;
}
int Rectangle::getHeight() {
    return height;
}
int Rectangle::area() const {
    return (width * height);
}
int Rectangle::operator > (const Rectangle& rect) {
    return this->area() > rect.area();
}