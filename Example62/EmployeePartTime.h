#pragma once
class EmployeePartTime {
private:
	char name[255];
public:
	EmployeePartTime(char n[]);
	char* getName();
	float getSalary();
};