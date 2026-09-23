#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle recta;
    Rectangle rectb;
    recta.count = 9;
    cout << rectb.count;
    Rectangle::count = 8;
    cout << Rectangle::count;
    return 0;
}