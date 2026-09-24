#pragma once
#include <cstring>
class Employee {
private:
	char name[255];
public:
	Employee(char n[]) {
		strcpy_s(name, n);
	}
	char* getName() {
		return name;
	}
	virtual float getSalary() = 0;
};