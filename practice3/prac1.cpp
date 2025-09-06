#include <iostream>

using namespace std;

class Student
{
private:
	string name;
	int age;

public:
	void set(string n, int a)
	{
		this->name = n;
		this->age = a;
	};

	void get()
	{
		cout << "Your name is " << this->name << " and your age is " << this->age << endl;
	};
};

int main()
{
	string nm;
	int ag;
	Student stdnt;

	cout << "Enter your name: ";
	cin >> nm;
	cout << "Enter your age: ";
	cin >> ag;

	stdnt.set(nm, ag);
	stdnt.get();

	return 0;
};