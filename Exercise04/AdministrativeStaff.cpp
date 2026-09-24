#include "AdministrativeStaff.h"

AdministrativeStaff::AdministrativeStaff() {
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
    this->seniority = 0;
}
AdministrativeStaff::AdministrativeStaff(int id, const char last_name[], const char first_name[], int year_of_birth, const char address[], const char phone[], const char department[], const char job[], double salary, double allowance, char seniority) {
    this->id = id;
    strcpy_s(this->last_name, last_name);
    strcpy_s(this->first_name, first_name);
    this->year_of_birth = year_of_birth;
    strcpy_s(this->address, address);
    strcpy_s(this->phone, phone);
    strcpy_s(this->department, department);
    strcpy_s(this->job, job);
    this->salary = salary;
    this->allowance = allowance;
    this->seniority = seniority;
}
void AdministrativeStaff::setId(int id) {
    this->id = id;
}
int AdministrativeStaff::getId() {
    return id;
}
void AdministrativeStaff::setLastName(const char last_name[]) {
    strcpy_s(this->last_name, last_name);
}
char* AdministrativeStaff::getLastName() {
    return last_name;
}
void AdministrativeStaff::setFirstName(const char first_name[]) {
    strcpy_s(this->first_name, first_name);
}
char* AdministrativeStaff::getFirstName() {
    return first_name;
}
void AdministrativeStaff::setYearOfBirth(int year_of_birth) {
    this->year_of_birth = year_of_birth;
}
int AdministrativeStaff::getYearOfBirth() {
    return year_of_birth;
}
void AdministrativeStaff::setAddress(const char address[]) {
    strcpy_s(this->address, address);
}
char* AdministrativeStaff::getAddress() {
    return address;
}
void AdministrativeStaff::setPhone(const char phone[]) {
    strcpy_s(this->phone, phone);
}
char* AdministrativeStaff::getPhone() {
    return phone;
}
void AdministrativeStaff::setJob(const char job[]) {
    strcpy_s(this->job, job);
}
char* AdministrativeStaff::getJob() {
    return job;
}
void AdministrativeStaff::setDepartment(const char department[]) {
    strcpy_s(this->department, department);
}
char* AdministrativeStaff::getDepartment() {
    return department;
}
void AdministrativeStaff::setSalary(double salary) {
    this->salary = salary;
}
double AdministrativeStaff::getSalary() {
    return salary;
}
void AdministrativeStaff::setAllowance(double allowance) {
    this->allowance = allowance;
}
double AdministrativeStaff::getAllowance() {
    return allowance;
}
void AdministrativeStaff::setSeniority(char seniority) {
    this->seniority = seniority;
}
char AdministrativeStaff::getSeniority() {
    return seniority;
}
void AdministrativeStaff::print() {
    cout << "Ma nhan vien: " << id << endl;
    cout << "Ho nhan vien: " << last_name << endl;
    cout << "Ten nhan vien: " << first_name << endl;
    cout << "Nam sinh: " << year_of_birth << endl;
    cout << "Dia chi: " << address << endl;
    cout << "So dien thoai: " << phone << endl;
    cout << "Nghe nghiep: " << job << endl;
    cout << "Don vi: " << department << endl;
    cout << "Luong: " << salary << endl;
    cout << "Phu cap: " << allowance << endl;
    cout << "Tham nien: " << (int)seniority << endl;
    cout << "-----------------------------------" << endl;
}