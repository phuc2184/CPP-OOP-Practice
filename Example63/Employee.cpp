#include "Employee.h"
#include <cstring>
Employee::Employee(char n[]) {
    strcpy_s(name, n);
}

char* Employee::getName() {
    return name;
}