#include "EmployeePartTime.h"
#include <cstring>
EmployeePartTime::EmployeePartTime(char n[]) {
	strcpy_s(name, n);
}
char* EmployeePartTime::getName() {
	return name;
}
float EmployeePartTime::getSalary() {
	return 300000;
}