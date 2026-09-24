#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {
    Item<int> i;
    i.setData(120);
    i.printData();

    Item<double> j;
    j.setData(12.5);
    j.printData();

    return 0;
}