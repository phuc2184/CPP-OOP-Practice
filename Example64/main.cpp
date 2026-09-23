#include "A.h"
#include "B.h"
#include <iostream>
using namespace std;
int main() {
    B* b = new B();
    b->x();
    b->y();

    delete b; 
    return 0;
}