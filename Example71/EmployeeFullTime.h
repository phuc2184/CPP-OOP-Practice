#pragma once
#include "Employee.h"
class EmployeeFullTime : public Employee {
private:
    int time;
public:
    EmployeeFullTime(char n[], int time);
    float getSalary();
};