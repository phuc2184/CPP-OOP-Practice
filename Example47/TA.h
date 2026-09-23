#pragma once
#include "Faculty.h"
#include "student.h"
class TA : public Faculty, public Student {
public:
	TA(int x);
};