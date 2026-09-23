#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    cout << Rectangle::getCount();
    Rectangle::setCount(8);
    Rectangle recta, rectb;
    recta.setValues(4, 20);
    cout << Rectangle::getCount();
    rectb.setValues(5, 20);
    cout << Rectangle::getCount();
    return 0;
}