#include "EmployeePartTime.h"
EmployeePartTime::EmployeePartTime(char n[]) :Employee(n) {
}
float EmployeePartTime::getSalary()
{
    return 300000;
}