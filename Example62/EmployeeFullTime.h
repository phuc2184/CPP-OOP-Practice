#pragma once
class EmployeeFullTime
{
private:
	char name[255];
	int time;
public:
	EmployeeFullTime(char n[], int time);
	char* getName();
	float getSalary();
};