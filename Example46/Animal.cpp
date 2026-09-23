#include <iostream>
#include "Animal.h"

Animal::Animal() {
	std::cout << "animal constructor" << std::endl;
}
void Animal::walk() {
	std::cout << "animal walks" << std::endl;
}