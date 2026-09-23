#include <iostream>
#include "Rectangle.h"
using namespace std;

void output() {
    Rectangle recta;
    recta.setWidth(3);
    recta.setHeight(4);
    cout << "area a:" << recta.area();
    cout << "I love you... Rect A";
}
int main() {
    output();
    cout << "I love you... Bye... Bye";
    return 0;
}