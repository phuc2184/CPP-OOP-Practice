#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
class ProductionWorker {
private:
	int id;
	char last_name[30];
	char first_name[30];
	int year_of_birth;
	char address[255];
	char phone[30];
	char job[15];
	char department[30];
	double salary;
	double allowance;
	float coefficient;
public:
	void setId(int id);
	int getId();
	void setLastName(char last_name[]);
	char* getLastName();
	void setFirstName(char first_name[]);
	char* getFirstName();
	void setYearOfBirth(int year_of_birth);
	int getYearOfBirth();
	void setAddress(char address[]);
	char* getAddress();
	void setPhone(char phone[]);
	char* getPhone();
	void setJob(char job[]);
	char* getJob();
	void setDepartment(char departemnt[]);
	char* getDepartment();
	void setSalary(double salary);
	double getSalary();
	void setAllowance(double allowance);
	double getAllowance();
	void setCoefficient(float coefficient);
	float getCoefficient();
};
#endif
