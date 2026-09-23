#include "A.h"
#include "B.h"
#include <iostream>

B::B():A() {
	std::cout << "B's contructor called"<<std::endl;

}