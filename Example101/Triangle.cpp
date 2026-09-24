#include "Triangle.h"

Triangle::Triangle() {
    width = 0;
    height = 0;
}

Triangle::Triangle(int w, int h) {
    width = w;
    height = h;
}
void Triangle::setWidth(int w) {
    width = w;
}
int Triangle::getWidth() {
    return width;
}
void Triangle::setHeight(int h) {
    height = h;
}
int Triangle::getHeight() {
    return height;
}
int Triangle::area() {
    return (width * height) / 2;
}
void Triangle::print() {
    cout << "Triangle :";
    cout << getWidth() << "-";
    cout << getHeight() << "->";
    cout << area() << endl;
}