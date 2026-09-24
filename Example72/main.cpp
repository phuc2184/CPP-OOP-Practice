#include <iostream>
#include "Employee.h"
#include "EmployeePartTime.h"
#include "EmployeeFullTime.h"
using namespace std;
void output(Employee* emp) {
    cout << "Name:" << emp->getName() << endl;
    cout << "Salary:" << emp->getSalary() << endl;
}
int main() {
    EmployeeFullTime* full = new EmployeeFullTime((char*)"Nguyen A", 20);
    EmployeePartTime* part = new EmployeePartTime((char*)"Nguyen B");
    output(full);
    output(part);

    delete full;
    delete part;
    return 0;
}