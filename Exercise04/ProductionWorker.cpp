#include "ProductionWorker.h"

ProductionWorker::ProductionWorker() {
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
    this->skill_level = 1;
}
ProductionWorker::ProductionWorker(int id, const char last_name[], const char first_name[], int year_of_birth, const char address[], const char phone[], const char department[], const char job[], double salary, double allowance, int skill_level) {
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
    this->skill_level = skill_level;
}
void ProductionWorker::setId(int id) {
    this->id = id;
}
int ProductionWorker::getId() {
    return id;
}
void ProductionWorker::setLastName(const char last_name[]) {
    strcpy_s(this->last_name, last_name);
}
char* ProductionWorker::getLastName() {
    return last_name;
}
void ProductionWorker::setFirstName(const char first_name[]) {
    strcpy_s(this->first_name, first_name);
}
char* ProductionWorker::getFirstName() {
    return first_name;
}
void ProductionWorker::setYearOfBirth(int year_of_birth) {
    this->year_of_birth = year_of_birth;
}
int ProductionWorker::getYearOfBirth() {
    return year_of_birth;
}
void ProductionWorker::setAddress(const char address[]) {
    strcpy_s(this->address, address);
}
char* ProductionWorker::getAddress() {
    return address;
}
void ProductionWorker::setPhone(const char phone[]) {
    strcpy_s(this->phone, phone);
}
char* ProductionWorker::getPhone() {
    return phone;
}
void ProductionWorker::setJob(const char job[]) {
    strcpy_s(this->job, job);
}
char* ProductionWorker::getJob() {
    return job;
}
void ProductionWorker::setDepartment(const char department[]) {
    strcpy_s(this->department, department);
}
char* ProductionWorker::getDepartment() {
    return department;
}
void ProductionWorker::setSalary(double salary) {
    this->salary = salary;
}
double ProductionWorker::getSalary() {
    return salary;
}
void ProductionWorker::setAllowance(double allowance) {
    this->allowance = allowance;
}
double ProductionWorker::getAllowance() {
    return allowance;
}
void ProductionWorker::setSkillLevel(int skill_level) {
    this->skill_level = skill_level;
}
int ProductionWorker::getSkillLevel() {
    return skill_level;
}
void ProductionWorker::print() {
    cout << "Ma cong nhan: " << id << endl;
    cout << "Ho va ten: " << last_name << " " << first_name << endl;
    cout << "Nam sinh: " << year_of_birth << endl;
    cout << "Dia chi: " << address << endl;
    cout << "So dien thoai: " << phone << endl;
    cout << "Cong việc: " << job << endl;
    cout << "Don vi: " << department << endl;
    cout << "Luong: " << salary << endl;
    cout << "Phu cap: " << allowance << endl;
    cout << "He so bac: " << skill_level << endl;
    cout << "-----------------------------------" << endl;
}