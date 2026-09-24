#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class AdministrativeStaff {
private:
    int id;
    char last_name[128];
    char first_name[30];
    int year_of_birth;
    char address[255];
    char phone[15];
    char job[30];
    char department[30];
    double salary;
    double allowance;
    char seniority;
public:
    AdministrativeStaff();
    AdministrativeStaff(int id, const char last_name[], const char first_name[], int year_of_birth, const char address[], const char phone[], const char department[], const char job[], double salary, double allowance, char seniority);
    void setId(int id);
    int getId();
    void setLastName(const char last_name[]);
    char* getLastName();
    void setFirstName(const char first_name[]);
    char* getFirstName();
    void setYearOfBirth(int year_of_birth);
    int getYearOfBirth();
    void setAddress(const char address[]);
    char* getAddress();
    void setPhone(const char phone[]);
    char* getPhone();
    void setJob(const char job[]);
    char* getJob();
    void setDepartment(const char department[]);
    char* getDepartment();
    void setSalary(double salary);
    double getSalary();
    void setAllowance(double allowance);
    double getAllowance();
    void setSeniority(char seniority);
    char getSeniority();
    void print();
};