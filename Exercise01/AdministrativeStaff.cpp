#include "AdministrativeStaff.h"
#include <cstring>

void AdministrativeStaff::setId(int id) {
	this->id = id;
}
int AdministrativeStaff::getId() {
	return id;
}
void AdministrativeStaff::setFirstName(char first_name[10]) {
	strcpy_s(this->first_name, first_name);
}
char* AdministrativeStaff::getFirstName() {
	return first_name;
}
void AdministrativeStaff::setLastName(char last_name[10]) {
	strcpy_s(this->last_name, last_name);
}
char* AdministrativeStaff::getLastName() {
	return last_name;
}
void AdministrativeStaff::setYearOfBirth(int year_of_birth) {
	this->year_of_birth = year_of_birth;
}
int AdministrativeStaff::getYearOfBirth() {
	return year_of_birth;
}
void AdministrativeStaff::setAddress(char address[255]) {
	strcpy_s(this->address, address);
}
char* AdministrativeStaff::getAddress() {
	return address;
}
void AdministrativeStaff::setPhone(char phone[10]) {
	strcpy_s(this->phone, phone);
}
char* AdministrativeStaff::getPhone() {
	return phone;
}
void AdministrativeStaff::setJob(char job[10]) {
	strcpy_s(this->job, job);
}
char* AdministrativeStaff::getJob() {
	return job;
}
void AdministrativeStaff::setDepartment(char department[10]) {
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
void AdministrativeStaff::setSeniority(float seniorty) {
	this->seniority = seniorty;
}
float AdministrativeStaff::getSeniority() {
	return seniority;
}
