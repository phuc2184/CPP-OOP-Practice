#include <iostream>
#include <string>
#include <map>
#include "Rectangle.h"
using namespace std;
int main() {
    map<string, Rectangle> recs;
    Rectangle ra(6, 8);
    Rectangle rb(7, 9);
    Rectangle rc(3, 9);
    recs["RA"] = ra;
    recs["RB"] = rb;
    recs["RC"] = rc;
    for (map<string, Rectangle>::iterator r = recs.begin(); r != recs.end(); ++r) {
        cout << (*r).second.getWidth() << "-" << (*r).second.getHeight() << ":" << (*r).second.area() << endl;
    }
    return 0;
}