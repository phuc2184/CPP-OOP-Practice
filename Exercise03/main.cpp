#include "AdministrativeStaff.h"

int main() {
    AdministrativeStaff nvhc[3];

    nvhc[0].setId(1);
    nvhc[0].setLastName("Nguyen Anh");
    nvhc[0].setFirstName("Tuan");
    nvhc[0].setYearOfBirth(1990);
    nvhc[0].setAddress("20 Tang Nhon Phu");
    nvhc[0].setPhone("0902880088");
    nvhc[0].setJob("Programmer");
    nvhc[0].setDepartment("IT");
    nvhc[0].setSalary(30000000);
    nvhc[0].setAllowance(300000);
    nvhc[0].setSeniority(3);

    nvhc[1].setId(2);
    nvhc[1].setLastName("Huynh Tan");
    nvhc[1].setFirstName("Phat");
    nvhc[1].setYearOfBirth(1995);
    nvhc[1].setAddress("21 Tang Nhon Phu");
    nvhc[1].setPhone("0845550555");
    nvhc[1].setJob("Programmer");
    nvhc[1].setDepartment("IT");
    nvhc[1].setSalary(5000000);
    nvhc[1].setAllowance(100000);
    nvhc[1].setSeniority(1.5);

    nvhc[2].setId(3);
    nvhc[2].setLastName("Tran Nhat");
    nvhc[2].setFirstName("Nam");
    nvhc[2].setYearOfBirth(1996);
    nvhc[2].setAddress("22 Tang Nhon Phu");
    nvhc[2].setPhone("0877990099");
    nvhc[2].setJob("Programmer");
    nvhc[2].setDepartment("IT");
    nvhc[2].setSalary(20000000);
    nvhc[2].setAllowance(200000);
    nvhc[2].setSeniority(2.34);

    nvhc[0].print();
    nvhc[1].print();
    nvhc[2].print();

    return 0;
}