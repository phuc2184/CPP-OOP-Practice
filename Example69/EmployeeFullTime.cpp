#include "EmployeeFullTime.h"
EmployeeFullTime::EmployeeFullTime(char n[], int t) :
    Employee(n) {
    time = t;
}
float EmployeeFullTime::getSalary() {
    return (float)(time * 1000000);
}