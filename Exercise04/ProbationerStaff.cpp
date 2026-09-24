#include "ProbationerStaff.h"
ProbationerStaff::ProbationerStaff() {
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
    this->probation_time = 0.0;
}
ProbationerStaff::ProbationerStaff(int id, const char last_name[],
    const char first_name[], int year_of_birth,
    const char address[], const char phone[], 
    const char department[], const char job[],
    double salary,double allowance, double probation_time) {
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
    this->probation_time = probation_time;
}
void ProbationerStaff::setId(int id) {
    this->id = id;
}
int ProbationerStaff::getId() {
    return id;
}
void ProbationerStaff::setLastName(const char last_name[]) {
    strcpy_s(this->last_name, last_name);
}
char* ProbationerStaff::getLastName() {
    return last_name;
}
void ProbationerStaff::setFirstName(const char first_name[]) {
    strcpy_s(this->first_name, first_name);
}
char* ProbationerStaff::getFirstName() {
    return first_name;
}
void ProbationerStaff::setYearOfBirth(int year_of_birth) {
    this->year_of_birth = year_of_birth;
}
int ProbationerStaff::getYearOfBirth() {
    return year_of_birth;
}
void ProbationerStaff::setAddress(const char address[]) {
    strcpy_s(this->address, address);
}
char* ProbationerStaff::getAddress() {
    return address;
}
void ProbationerStaff::setPhone(const char phone[]) {
    strcpy_s(this->phone, phone);
}
char* ProbationerStaff::getPhone() {
    return phone;
}
void ProbationerStaff::setJob(const char job[]) {
    strcpy_s(this->job, job);
}
char* ProbationerStaff::getJob() {
    return job;
}
void ProbationerStaff::setDepartment(const char department[]) {
    strcpy_s(this->department, department);
}
char* ProbationerStaff::getDepartment() {
    return department;
}
void ProbationerStaff::setSalary(double salary) {
    this->salary = salary;
}
double ProbationerStaff::getSalary() {
    return salary;
}
void ProbationerStaff::setAllowance(double allowance) {
    this->allowance = allowance;
}
double ProbationerStaff::getAllowance() {
    return allowance;
}
void ProbationerStaff::setProbationTime(double probation_time) {
    this->probation_time = probation_time;
}
double ProbationerStaff::getProbationTime() {
    return probation_time;
}
void ProbationerStaff::print() {
    cout << "Ma NV tap su: " << id << endl;
    cout << "Ho va ten: " << last_name << " " << first_name << endl;
    cout << "Nam sinh: " << year_of_birth << endl;
    cout << "Dia chi: " << address << endl;
    cout << "So dien thoai: " << phone << endl;
    cout << "Cong việc: " << job << endl;
    cout << "Don vi: " << department << endl;
    cout << "Luong: " << salary << endl;
    cout << "Phu cap: " << allowance << endl;
    cout << "Thoi gian tap su: " << probation_time << " thang" << endl;
    cout << "-----------------------------------" << endl;
}