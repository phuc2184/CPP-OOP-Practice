#include <vector>
#include <algorithm>
#include <iostream>
#include "Rectangle.h"

using namespace std;
int main() {
    vector<Rectangle> recs;
    Rectangle ra(6, 8);
    recs.push_back(ra);
    Rectangle rb(7, 9);
    recs.push_back(rb);
    Rectangle rc(3, 9);
    recs.push_back(rc);
    for (vector<Rectangle>::iterator r = recs.begin(); r != recs.end(); ++r) {
        cout << (*r).getWidth() << "-" << (*r).getHeight() << ":" << (*r).area() << endl;
    }
    return 0;
}