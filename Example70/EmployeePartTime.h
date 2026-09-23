#pragma once
#include "Employee.h"
class EmployeePartTime : public Employee
{
public:
    EmployeePartTime(char n[]);
    float getSalary();
};