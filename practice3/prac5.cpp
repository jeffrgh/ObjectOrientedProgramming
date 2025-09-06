#include <iostream>

using namespace std;

class Employee
{
private:
	int id;
	float salary;

public:
	void set(int i, float s)
	{
		this->id = i;
		this->salary = s;
	};
	void get()
	{
		cout << "ID is " << this->id << " and salary is " << this->salary << endl;
	};
};

int main()
{
	int id;
	float salary;
	Employee e;

	cout << "Enter your ID: ";
	cin >> id;
	cout << "Enter the salary you think you deserve: ";
	cin >> salary;

	e.set(id, salary);
	e.get();

	Employee e1;

	e1.set(123, 1999.00);
	e1.get();

	Employee e2;

	e2.set(124, 2300.99);
	e2.get();

	return 0;
}