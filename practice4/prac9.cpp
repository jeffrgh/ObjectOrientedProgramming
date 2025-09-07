#include <iostream>

using namespace std;

class Employee
{
private:
	string name;
	int id;
	float salary;

public:
	Employee(string n, int i)
	{
		this->name = n;
		this->id = i;
		this->salary = 0;
	};
	Employee(string n, int i, float sal)
	{
		this->name = n;
		this->id = i;
		this->salary = sal;
	};
	void get()
	{
		cout << "Your name and ID is " << this->name << " and " << this->id << " and your salary is " << this->salary << endl;
	};
};

int main()
{
	Employee e1("Roxas", 13), e2("Jeffrey", 7, 15000);
	e1.get();
	e2.get();

	return 0;
}