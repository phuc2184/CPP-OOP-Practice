#include <iostream >
#include "A.h"
using namespace std;
void A::x(){
	cout << "I am xa"<<endl;
}
void A::m(){
	cout << "I am ma"<<endl;
	x();
}