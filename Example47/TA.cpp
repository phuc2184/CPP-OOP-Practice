#include<iostream>
#include"Faculty.h"
#include"Student.h"
#include "TA.h"
TA::TA(int x) : Student(x), Faculty(x) {
	std::cout << "TA::TA(int) called" << std::endl;
}