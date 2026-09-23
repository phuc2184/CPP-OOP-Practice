#pragma once
class Person {
private:
	int age;
	char name[255];
public:
	void setAge(int a);
	int getAge();
	void setName(char n[]);
	char* getName();
	void status();
};