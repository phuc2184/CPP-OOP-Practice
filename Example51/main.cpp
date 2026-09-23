#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main(){
    Rectangle r;
    Triangle t;
    r.setValuess(4, 5);
    t.setValuess(4, 5);
    cout << r.area() << endl;
    cout << t.area() << endl;
    return 0;
}