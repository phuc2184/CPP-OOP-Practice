#include <iostream>
#include "Rectangle.h"

using namespace std;
int main() {
    Rectangle r1(6, 8);
    Rectangle r2(3, 9);
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    if (r1 > r2) {
        cout << "Rectangle r1 is larger than r2" << endl;
    }
    else {
        cout << "Rectangle r1 is not larger than r2" << endl;
    }
    return 0;
}