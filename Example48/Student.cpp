#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(int x) : Person(x){
    cout << "Student::Student(int ) called" << endl;
}
