#include "Base.h"
#include <iostream>
using namespace std;

Base::Base(){
    cout << "Constructing Base" << endl;
}

Base::~Base(){
    cout << "Destroying Base"<< endl;
}