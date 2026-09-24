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
    for (int i = 0; i < recs.size(); i++) {
        cout << recs[i].getWidth() << "-" << recs[i].getHeight() << ":" << recs[i].area() << endl;
    }
    return 0;
}