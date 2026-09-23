#include <iostream>
#include "EmployeeFullTime.h"
#include "EmployeePartTime.h"
using namespace std;
void outputFull(EmployeeFullTime emp) {
    cout << "Name:" << emp.getName()<<endl;
    cout << "Salary:" << emp.getSalary() << endl;
}
void outputPart(EmployeePartTime emp) {
    cout << "Name:" << emp.getName() << endl;
    cout << "Salary:" << emp.getSalary() << endl;
}
int main() {
    EmployeeFullTime full((char*)"Nguyen A", 20);
    EmployeePartTime part((char*)"Nguyen B");
    outputFull(full);
    outputPart(part);
    return 0;
}