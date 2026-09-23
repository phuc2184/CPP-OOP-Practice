#include "EmployeeFullTime.h"
#include "EmployeePartTime.h"
#include <iostream>
using namespace std;
void outputFull(EmployeeFullTime emp) {
	cout << "Name:" << emp.getName();
	cout << "Salary:" << emp.getSalary();
}
void outputPart(EmployeePartTime emp) {
	cout << "Name:" << emp.getName();
	cout << "Salary:" << emp.getSalary();
}
int main()
{
	EmployeeFullTime full((char*)"Nguyen A", 20);
	EmployeePartTime part((char*)"Nguyen B");
	outputFull(full);
	outputPart(part);
	return 0;
}