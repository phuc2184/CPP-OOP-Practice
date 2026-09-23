#include "TA.h"
#include <iostream>

using namespace std;

TA::TA(int x) :Person(x), Student(x), Faculty(x){
	cout << "TA::TA(int ) called" << endl;
}