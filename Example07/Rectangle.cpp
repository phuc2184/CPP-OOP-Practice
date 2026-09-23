#include "Rectangle.h"

int Rectangle::count = 10;
void Rectangle::setValues(int w, int h) {
    width = w;
    height = h;
    count++;
}
int Rectangle::area() {
    return width * height;
}
void Rectangle::setCount(int value) {
    count = value;
}
int Rectangle::getCount() {
    return count;
}