#include <iostream>
#include "ProbationerStaff.h"
#include "ProductionWorker.h"
#include "AdministrativeStaff.h"

using namespace std;

int main() {
	AdministrativeStaff nvhc;
	ProbationerStaff nvts;
	ProductionWorker ncsx;
	nvhc.setId(1);
	nvhc.setLastName((char*)"Nguyen Anh");
	nvhc.setFirstName((char*)"Tuan");
	nvhc.setYearOfBirth(1990);
	nvhc.setAddress((char*)"20 Tang Nhon Phu");
	nvhc.setPhone((char*)"090288088");
	nvhc.setJob((char*)"Programmer");
	nvhc.setDepartment((char*)"IT");
	nvhc.setSalary(30000000);
	nvhc.setAllowance(300);
	nvhc.setSeniority(3);

	nvts.setId(3);
	nvts.setLastName((char*)"Tran Nhat");
	nvts.setFirstName((char*)"Nam");
	nvts.setYearOfBirth(1996);
	nvts.setAddress((char*)"22 Tang Nhon Phu");
	nvts.setPhone((char*)"0877990099");
	nvts.setJob((char*)"Programmer");
	nvts.setDepartment((char*)"IT");
	nvts.setSalary(20000000);
	nvts.setAllowance(200000);
	nvts.setProbation(2.34);

	ncsx.setId(2);
	ncsx.setLastName((char*)"Huynh Tan");
	ncsx.setFirstName((char*)"Phat");
	ncsx.setYearOfBirth(1995);
	ncsx.setAddress((char*)"21 Tang Nhon Phu");
	ncsx.setPhone((char*)"0845550555");
	ncsx.setJob((char*)"Programmer");
	ncsx.setDepartment((char*)"IT");
	ncsx.setSalary(5000000);
	ncsx.setAllowance(100000);
	ncsx.setCoefficient(1.5);

	

	cout << "***Nhan vien hanh chanh***" << endl;
	cout << "Ma:  " << nvhc.getId() << endl;
	cout << "Ho:  " << nvhc.getLastName() << endl;
	cout << "Ten: " << nvhc.getFirstName() << endl;
	cout << "Nam sinh:  " << nvhc.getYearOfBirth() << endl;
	cout << "Dia chi:  " << nvhc.getAddress() << endl;
	cout << "So dien thoai:  " << nvhc.getPhone() << endl;
	cout << "Nghe nghiep:  " << nvhc.getJob() << endl;
	cout << "Don vi:  " << nvhc.getDepartment() << endl;
	cout << "Luong:  " << nvhc.getSalary() << endl;
	cout << "Phu cap:  " << nvhc.getAllowance() << endl;
	cout << "Tham nien:  " << nvhc.getSeniority() << endl;

	cout << endl;

	

	cout << "***Nhan vien tap su***" << endl;
	cout << "Ma:  " << nvts.getId() << endl;
	cout << "Ho:  " << nvts.getLastName()<<endl;
	cout << "Ten: " << nvts.getFirstName() << endl;
	cout << "Nam sinh:  " << nvts.getYearOfBirth() << endl;
	cout << "Dia chi:  " << nvts.getAddress() << endl;
	cout << "So dien thoai:  " << nvts.getPhone() << endl;
	cout << "Nghe nghiep:  " << nvts.getJob() << endl;
	cout << "Don vi:  " << nvts.getDepartment() << endl;
	cout << "Luong:  " << nvts.getSalary() << endl;
	cout << "Phu cap:  " << nvts.getAllowance() << endl;
	cout << "He so bac:  " << nvts.getProbation() << endl;
	cout << endl;

	cout << "***Cong nhan san xuat***" << endl;
	cout << "Ma:  " << ncsx.getId() << endl;
	cout << "Ho:  " << ncsx.getLastName() << endl;
	cout << "Ten: " << ncsx.getFirstName() << endl;
	cout << "Nam sinh:  " << ncsx.getYearOfBirth() << endl;
	cout << "Dia chi:  " << ncsx.getAddress() << endl;
	cout << "So dien thoai:  " << ncsx.getPhone() << endl;
	cout << "Nghe nghiep:  " << ncsx.getJob() << endl;
	cout << "Don vi:  " << ncsx.getDepartment() << endl;
	cout << "Luong:  " << ncsx.getSalary()<<endl;
	cout << "Phu cap:  " << ncsx.getAllowance() << endl;
	cout << "Thoi gian tap su:  " << ncsx.getCoefficient() << endl;
	









}