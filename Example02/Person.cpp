#include <iostream>
#include <cstring>
using namespace std;
class Person {
private:
    int age;
    char name[255];
public:
    void setAge(int a) {
        age = a;
    }
    int getAge() {
        return age;
    }
    void setName(const char n[]) {
        strcpy_s(name, n);
    }
    char* getName() {
        return name;
    }
};
int main() {
    Person per;
    per.setAge(20);
    per.setName("Nguyen B");
    cout << "Age : " << per.getAge();
    cout << "Name: " << per.getName();
    return 0;
}