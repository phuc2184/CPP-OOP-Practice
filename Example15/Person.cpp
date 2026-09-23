#include "Person.h"
#include <iostream>

void Person::status() {
	if (age >= 60 && age < 120) {
		std::cout << "old";
	}
	if (age >= 18 && age < 120) {
		std::cout << "youthful";
	}
		
}