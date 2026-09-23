#include "ProductionWorker.h"
#include <cstring>

void ProductionWorker::setId(int id) {
	this->id = id;
}
int ProductionWorker::getId() {
	return id;
}
void ProductionWorker::setLastName(char last_name[10]) {
	strcpy_s(this->last_name, last_name);
}
char* ProductionWorker::getLastName() {
	return last_name;
}
void ProductionWorker::setFirstName(char first_name[10]) {
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
void ProductionWorker::setAddress(char address[255]) {
	strcpy_s(this->address, address);
}
char* ProductionWorker::getAddress() {
	return address;
}
void ProductionWorker::setPhone(char phone[10]) {
	strcpy_s(this->phone, phone);
}
char* ProductionWorker::getPhone() {
	return phone;
}
void ProductionWorker::setJob(char job[10]) {
	strcpy_s(this->job, job);
}
char* ProductionWorker::getJob() {
	return job;
}
void ProductionWorker::setDepartment(char department[10]) {
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
void ProductionWorker::setCoefficient(float coefficient) {
	this->coefficient = coefficient;
}
float ProductionWorker::getCoefficient() {
	return coefficient;
}




