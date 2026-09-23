#include "ProbationerStaff.h"
#include <cstring>

void ProbationerStaff::setId(int id) {
	this->id = id;
}
int ProbationerStaff::getId() {
	return id;
}
void ProbationerStaff::setLastName(char last_name[]) {
	strcpy_s(this->last_name, sizeof(this->last_name), last_name);
}
char* ProbationerStaff::getLastName() {
	return last_name;
}
void ProbationerStaff::setFirstName(char first_name[]) {
	strcpy_s(this->first_name, sizeof(this->first_name), first_name);
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
void ProbationerStaff::setAddress(char address[]) {
	strcpy_s(this->address, sizeof(this->address), address);
}
char* ProbationerStaff::getAddress() {
	return address;
}
void ProbationerStaff::setPhone(char phone[]) {
	strcpy_s(this->phone, sizeof(this->phone), phone);
}
char* ProbationerStaff::getPhone() {
	return phone;
}
void ProbationerStaff::setJob(char job[]) {
	strcpy_s(this->job, sizeof(this->job), job);
}
char* ProbationerStaff::getJob() {
	return job;
}
void ProbationerStaff::setDepartment(char department[]) {
	strcpy_s(this->department, sizeof(this->department), department);
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
void ProbationerStaff::setProbation(float probation) {
	this->probation = probation;
}
float ProbationerStaff::getProbation() {
	return probation;
}