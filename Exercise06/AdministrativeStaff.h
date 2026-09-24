#pragma once
#pragma once
#include "Employee.h"

class AdministrativeStaff : public Employee {
private:
    float seniority;
public:
    AdministrativeStaff();
    AdministrativeStaff(int id, const char last_name[],
        const char first_name[], int year_of_birth,
        const char address[], const char phone[],
        const char job[], const char department[],
        double salary, double allowance, float seniority);
    void setSeniority(float seniority);
    float getSeniority();

    void print();
};