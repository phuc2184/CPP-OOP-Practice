#pragma once
#include <list>
#include <iostream>

using namespace std;
class IntList {
private:
    list<int> lst;
public:
    void addData();
    void display() const;
};