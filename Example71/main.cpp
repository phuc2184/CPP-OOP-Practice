#include "Employee.h"
#include "EmployeeFullTime.h"
#include "EmployeePartTime.h"
#include <iostream>
using namespace std;
int main() {
    Employee ee("Nguyen B");         // error
    Employee* e = new Employee("Nam"); // error
    EmployeeFullTime full("Nguyen A", 20);
    EmployeePartTime part("Nguyen B");
    output(full);
    output(part);
    return 0;
}