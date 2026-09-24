#include "Employee.h"
Employee::Employee() {
    this->id = 0;
    strcpy_s(this->last_name, "");
    strcpy_s(this->first_name, "");
    this->year_of_birth = 0;
    strcpy_s(this->address, "");
    strcpy_s(this->phone, "");
    strcpy_s(this->job, "");
    strcpy_s(this->department, "");
    this->salary = 0.0;
    this->allowance = 0.0;
}
Employee::Employee(int id, const char last_name[], 
    const char first_name[], int year_of_birth, 
    const char address[], const char phone[], 
    const char job[], const char department[], 
    double salary, double allowance) {
    this->id = id;
    strcpy_s(this->last_name, last_name);
    strcpy_s(this->first_name, first_name);
    this->year_of_birth = year_of_birth;
    strcpy_s(this->address, address);
    strcpy_s(this->phone, phone);
    strcpy_s(this->job, job);
    strcpy_s(this->department, department);
    this->salary = salary;
    this->allowance = allowance;
}
void Employee::setId(int id) {
    this->id = id;
}
int Employee::getId() {
    return id;
}
void Employee::setLastName(const char last_name[]) {
    strcpy_s(this->last_name, last_name);
}
char* Employee::getLastName() {
    return last_name;
}
void Employee::setFirstName(const char first_name[]) {
    strcpy_s(this->first_name, first_name);
}
char* Employee::getFirstName() {
    return first_name;
}
void Employee::setYearOfBirth(int year_of_birth) {
    this->year_of_birth = year_of_birth;
}
int Employee::getYearOfBirth() {
    return year_of_birth;
}
void Employee::setAddress(const char address[]) {
    strcpy_s(this->address, address);
}
char* Employee::getAddress() {
    return address;
}
void Employee::setPhone(const char phone[]) {
    strcpy_s(this->phone, phone);
}

char* Employee::getPhone() {
    return phone;
}
void Employee::setJob(const char job[]) {
    strcpy_s(this->job, job);
}

char* Employee::getJob() {
    return job;
}
void Employee::setDepartment(const char department[]) {
    strcpy_s(this->department, department);
}
char* Employee::getDepartment() {
    return department;
}
void Employee::setSalary(double salary) {
    this->salary = salary;
}
double Employee::getSalary() {
    return salary;
}
void Employee::setAllowance(double allowance) {
    this->allowance = allowance;
}
double Employee::getAllowance() {
    return allowance;
}
void Employee::print() {
    cout << "Ma nhan vien: " << id << endl;
    cout << "Ho va ten: " << last_name << " " << first_name << endl;
    cout << "Nam sinh: " << year_of_birth << endl;
    cout << "Dia chi: " << address << endl;
    cout << "So dien thoai: " << phone << endl;
    cout << "Nghe nghiep: " << job << endl;
    cout << "Don vi: " << department << endl;
    cout << "Luong: " << salary << endl;
    cout << "Phu cap: " << allowance << endl;
}