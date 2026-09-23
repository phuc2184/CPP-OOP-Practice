#include "Employee.h"
#include "EmployeeFullTime.h"
#include "EmployeePartTime.h"
#include <iostream>
using namespace std;
void output(Employee* emp) {
    cout << "Name:" << emp->getName()<<endl;
    cout << "Salary:" << emp->getSalary()<<endl;
}
int main() {
    EmployeeFullTime* full = new EmployeeFullTime((char*)"Nguyen A", 20);
    EmployeePartTime* part = new EmployeePartTime((char*)"Nguyen B");
    output(full);
    output(part);
    return 0;
}
