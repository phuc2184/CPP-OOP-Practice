#pragma once
#include <cstring>
class Employee {
private:
	char name[255];
public:
	Employee(char n[]);
	char* getName();

};