#include "EmployeePartTime.h"
#include "Employee.h"
#include <iostream>

using namespace std;

EmployeePartTime::EmployeePartTime(char n[]) :
    Employee(n) {
}
float EmployeePartTime::getSalary() { return 300000; }
void output(Employee emp) { // error
    cout << "Name:" << emp.getName();
    cout << "Salary:" << emp.getSalary();
}