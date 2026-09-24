#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class AdministrativeStaff {
private:
    int id;
    char last_name[50];
    char first_name[30];
    int year_of_birth;
    char address[250];
    char phone[15];
    char job[30];
    char department[30];
    double salary;
    double allowance;
    double seniority;
public:
    AdministrativeStaff();
    void setId(int ma);
    int getId();
    void setLastName(const char last_name[]);
    char* getLastName();
    void setFirstName(const char first_name[]);
    char* getFirstName();
    void setYearOfBirth(int yob);
    int getYearOfBirth();
    void setAddress(const char addr[]);
    char* getAddress();
    void setPhone(const char ph[]);
    char* getPhone();
    void setJob(const char occ[]);
    char* getJob();
    void setDepartment(const char dept[]);
    char* getDepartment();
    void setSalary(double sal);
    double getSalary();
    void setAllowance(double allow);
    double getAllowance();
    void setSeniority(int sen);
    int getSeniority();
    void print();
};