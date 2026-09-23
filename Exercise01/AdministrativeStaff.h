#ifndef ADMINISTRATIVESTAFF_H
#define ADMINISTRATIVESTAFF_H
class AdministrativeStaff {
private:
	int id;
	char last_name[30];
	char first_name[20];
	int year_of_birth;
	char address[255];
	char phone[15];
	char job[30];
	char department[30];
	double salary;
	double allowance;
	float seniority;
public:
	void setId(int id);
	int getId();
	void setFirstName(char first_name[]);
	char* getFirstName();
	void setLastName(char last_name[]);
	char* getLastName();
	void setYearOfBirth(int year_of_birth);
	int getYearOfBirth();
	void setAddress(char address[]);
	char* getAddress();
	void setPhone(char phone[]);
	char* getPhone();
	void setJob(char job[]);
	char* getJob();
	void setDepartment(char department[]);
	char* getDepartment();
	void setSalary(double salary);
	double getSalary();
	void setAllowance(double allowance);
	double getAllowance();
	void setSeniority(float seniorty);
	float getSeniority();
};
#endif
