#include <iostream>
#include "AdministrativeStaff.h"
#include "ProbationerStaff.h"
#include "ProductionWorker.h"

using namespace std;

int main() {
	AdministrativeStaff nvhc[3];

	nvhc[0].setId(1);
	nvhc[0].setLastName((char*)"Nguyen Anh");
	nvhc[0].setFirstName((char*)"Tuan");
	nvhc[0].setYearOfBirth(1990);
	nvhc[0].setAddress((char*)"20 Tang Nhon Phu");
	nvhc[0].setPhone((char*)"090288088");
	nvhc[0].setJob((char*)"Programmer");
	nvhc[0].setDepartment((char*)"IT");
	nvhc[0].setSalary(30000000);
	nvhc[0].setAllowance(300);
	nvhc[0].setSeniority(3);

	nvhc[1].setId(2);
	nvhc[1].setLastName((char*)"Tran Nhat");
	nvhc[1].setFirstName((char*)"Nam");
	nvhc[1].setYearOfBirth(1996);
	nvhc[1].setAddress((char*)"22 Tang Nhon Phu");
	nvhc[1].setPhone((char*)"0877990099");
	nvhc[1].setJob((char*)"Programmer");
	nvhc[1].setDepartment((char*)"IT");
	nvhc[1].setSalary(20000000);
	nvhc[1].setAllowance(200);
	nvhc[1].setSeniority(2);

	nvhc[2].setId(3);
	nvhc[2].setLastName((char*)"Huynh Tan");
	nvhc[2].setFirstName((char*)"Phat");
	nvhc[2].setYearOfBirth(1995);
	nvhc[2].setAddress((char*)"21 Tang Nhon Phu");
	nvhc[2].setPhone((char*)"0845550555");
	nvhc[2].setJob((char*)"Programmer");
	nvhc[2].setDepartment((char*)"IT");
	nvhc[2].setSalary(5000000);
	nvhc[2].setAllowance(100);
	nvhc[2].setSeniority(1);

	cout << "*** Nhan vien hanh chanh 1 ***\n";
	cout << "Ma:  " << nvhc[0].getId() << endl;
	cout << "Ho:  " << nvhc[0].getLastName() << endl;
	cout << "Ten: " << nvhc[0].getFirstName() << endl;
	cout << "Nam sinh:  " << nvhc[0].getYearOfBirth() << endl;
	cout << "Dia chi:  " << nvhc[0].getAddress() << endl;
	cout << "So dien thoai:  " << nvhc[0].getPhone() << endl;
	cout << "Nghe nghiep:  " << nvhc[0].getJob() << endl;
	cout << "Don vi:  " << nvhc[0].getDepartment() << endl;
	cout << "Luong:  " << nvhc[0].getSalary() << endl;
	cout << "Phu cap:  " << nvhc[0].getAllowance() << endl;
	cout << "Tham nien:  " << nvhc[0].getSeniority() << endl << endl;

	cout << "*** Nhan vien hanh chanh 2 ***\n";
	cout << "Ma:  " << nvhc[1].getId() << endl;
	cout << "Ho:  " << nvhc[1].getLastName() << endl;
	cout << "Ten: " << nvhc[1].getFirstName() << endl;
	cout << "Nam sinh:  " << nvhc[1].getYearOfBirth() << endl;
	cout << "Dia chi:  " << nvhc[1].getAddress() << endl;
	cout << "So dien thoai:  " << nvhc[1].getPhone() << endl;
	cout << "Nghe nghiep:  " << nvhc[1].getJob() << endl;
	cout << "Don vi:  " << nvhc[1].getDepartment() << endl;
	cout << "Luong:  " << nvhc[1].getSalary() << endl;
	cout << "Phu cap:  " << nvhc[1].getAllowance() << endl;
	cout << "Tham nien:  " << nvhc[1].getSeniority() << endl << endl;

	cout << "*** Nhan vien hanh chanh 3 ***\n";
	cout << "Ma:  " << nvhc[2].getId() << endl;
	cout << "Ho:  " << nvhc[2].getLastName() << endl;
	cout << "Ten: " << nvhc[2].getFirstName() << endl;
	cout << "Nam sinh:  " << nvhc[2].getYearOfBirth() << endl;
	cout << "Dia chi:  " << nvhc[2].getAddress() << endl;
	cout << "So dien thoai:  " << nvhc[2].getPhone() << endl;
	cout << "Nghe nghiep:  " << nvhc[2].getJob() << endl;
	cout << "Don vi:  " << nvhc[2].getDepartment() << endl;
	cout << "Luong:  " << nvhc[2].getSalary() << endl;
	cout << "Phu cap:  " << nvhc[2].getAllowance() << endl;
	cout << "Tham nien:  " << nvhc[2].getSeniority() << endl;

	return 0;
}