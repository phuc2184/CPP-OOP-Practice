#include "AdministrativeStaff.h"

AdministrativeStaff::AdministrativeStaff() {
    id = 0;
    strcpy_s(last_name, "");
    strcpy_s(first_name, "");
    year_of_birth = 0;
    strcpy_s(address, "");
    strcpy_s(phone, "");
    strcpy_s(job, "");
    strcpy_s(department, "");
    salary = 0.0;
    allowance = 0.0;
    seniority = 0;
}
void AdministrativeStaff::setId(int ma) {
    id = ma;
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
void AdministrativeStaff::setYearOfBirth(int yob) {
    year_of_birth = yob;
}
int AdministrativeStaff::getYearOfBirth() {
    return year_of_birth;
}
void AdministrativeStaff::setAddress(const char addr[]) {
    strcpy_s(this->address, addr);
}
char* AdministrativeStaff::getAddress() {
    return address;
}
void AdministrativeStaff::setPhone(const char ph[]) {
    strcpy_s(this->phone, ph);
}
char* AdministrativeStaff::getPhone() {
    return phone;
}
void AdministrativeStaff::setJob(const char occ[]) {
    strcpy_s(this->job, occ);
}
char* AdministrativeStaff::getJob() {
    return job;
}
void AdministrativeStaff::setDepartment(const char dept[]) {
    strcpy_s(this->department, dept);
}
char* AdministrativeStaff::getDepartment() {
    return department;
}
void AdministrativeStaff::setSalary(double sal) {
    salary = sal;
}
double AdministrativeStaff::getSalary() {
    return salary;
}
void AdministrativeStaff::setAllowance(double allow) {
    allowance = allow;
}
double AdministrativeStaff::getAllowance() {
    return allowance;
}
void AdministrativeStaff::setSeniority(int sen) {
    seniority = sen;
}
int AdministrativeStaff::getSeniority() {
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
    cout << "Tham nien: " << seniority << endl;
    cout << "-----------------------------------" << endl;
}