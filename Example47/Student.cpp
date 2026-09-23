#include<iostream>
#include"Person.h"
#include"Student.h"
Student::Student(int x) :Person(x) {
	std::cout << "Student::Student(int) called" << std::endl;
}