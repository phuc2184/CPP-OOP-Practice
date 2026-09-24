#pragma once
#pragma once
#include "Employee.h"

class ProductionWorker : public Employee {
private:
    float coefficient;
public:
    ProductionWorker();
    ProductionWorker(int id, const char last_name[],
        const char first_name[], int year_of_birth,
        const char address[], const char phone[],
        const char job[], const char department[],
        double salary, double allowance, float coefficient);
    void setCoefficient(float coefficient);
    float getCoefficient();
    void print();
};