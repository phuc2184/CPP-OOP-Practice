#pragma once
#include "A.h"
class B :private A {
public:
	void print();
};