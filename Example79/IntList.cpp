#include "IntList.h"

void IntList::addData() {
    lst.push_back(2);
    lst.push_back(5);
    lst.push_back(3);
    lst.push_back(9);
}
void IntList::display() const {
    cout << "List size = " << lst.size() << endl;
    for (list<int>::const_iterator i = lst.begin(); i != lst.end(); ++i) {
        cout << (*i) << endl;
    }
}