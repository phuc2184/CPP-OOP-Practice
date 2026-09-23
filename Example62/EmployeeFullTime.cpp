#include "EmployeeFullTime.h"
#include <cstring>
EmployeeFullTime::EmployeeFullTime(char n[], int t) {
	strcpy_s(name, n);
	time = t;
}
char* EmployeeFullTime::getName() {
	return name;
}
float EmployeeFullTime::getSalary() {
	return (float)(time * 1000000);
}