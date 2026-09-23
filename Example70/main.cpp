#include <iostream>
#include "Employee.h"
#include "EmployeeFullTime.h"
#include "EmployeePartTime.h"
using namespace std;
void output(Employee& emp) {
    cout << "Name:" << emp.getName() << endl;
    cout << "Salary:" << emp.getSalary() << endl;
}
using namespace std;
int main()
{
    Employee ee((char*)"Nguyen B");         // OK
    Employee* e = new Employee((char*)"Nam"); // OK
    EmployeeFullTime full((char*)"Nguyen A", 20);
    EmployeePartTime part((char*)"Nguyen B");
    output(full);
    output(part);

    delete e;
    return 0;
}