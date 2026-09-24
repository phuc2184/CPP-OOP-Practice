#include "Vector.h"
void MyVector::addData() {
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(9);
}

void MyVector::display() {
    cout << "Vector size = " << vec.size() << endl;

    for (int i = 0; i < vec.size(); i++) {
        cout << "vec[" << i << "] = " << vec[i] << endl;
    }

    for (vector<int>::iterator i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << endl;
    }
}