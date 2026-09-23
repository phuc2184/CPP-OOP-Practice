#include<iostream>
#include"Faculty.h"
#include"Person.h"
Faculty::Faculty(int x) : Person(x) {
	std::cout << "Faculty::Faculty (int) called" << std::endl;
}