#include "A.h"
#include <iostream>
using namespace std;
void A::x(){
	cout << "I am xa"<<endl;
}
void A::m(){
	cout << "I am ma"<<endl;
	x();
}