#pragma once
#include "Faculty.h"
#include "Student.h"

class TA : public Faculty, public Student{
public:
    TA(int x);
};