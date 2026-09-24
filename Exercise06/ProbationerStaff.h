#pragma once
#pragma once
#include "Employee.h"

class ProbationerStaff : public Employee {
private:
    float probation;
public:
    ProbationerStaff();
    ProbationerStaff(int id, const char last_name[],
        const char first_name[], int year_of_birth,
        const char address[], const char phone[],
        const char job[], const char department[], 
        double salary, double allowance, float probation);
    void setProbation(float probation);
    float getProbation();
    void print();
};