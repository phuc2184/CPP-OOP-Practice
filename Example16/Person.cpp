#include "Person.h"
#include <cstring>
#include <iostream>

int Person::getAge() {
	return age;
}
void Person::setName(char n[]) {
	strcpy_s(name, n);
}
char* Person::getName() {
	return name;
}
void Person::status() {
	if (age >= 60 && age < 100)
		std::cout << "old" << std::endl;
	else if (age >= 18 && age < 60)
		std::cout << "youthful" << std::endl;
	else
		std::cout << "Age invalid" << std::endl;
}
void Person::setAge(int a) {
	if (a >= 18 && a < 120)
		age = a;
	else std::cout << "Age invalid" << std::endl;

}