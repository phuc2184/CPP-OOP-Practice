#include "Person.h"
#include <iostream>
using namespace std;
int main() {
	Person per;
	per.age = 20;
	strcpy_s(per.name, "Nguyen B");
	per.status();
	return 0;
}