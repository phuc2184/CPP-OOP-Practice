#include "Faculty.h"
#include <iostream>

using namespace std;

Faculty::Faculty(int x) : Person(x){
	cout << "Faculty::Faculty(int ) called" << endl;
}