#include <iostream>
#include "EmployeePartTime.h"
#include "EmployeeFullTime.h"
using namespace std;
void output(Employee emp) {
    cout << "Name:" << emp.getName() << endl;
    cout << "Salary:" << emp.getSalary()<<endl;
}
int main() {
    EmployeeFullTime full((char*)"Nguyen A", 20);
    EmployeePartTime part((char*)"Nguyen B");
    output(full);
    output(part);
    return 0;
}