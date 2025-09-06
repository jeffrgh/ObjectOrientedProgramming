#include <iostream>

using namespace std;

class Student
{
private:
	string name;
	int age;
	float marks;

public:
	Student()
	{
		this->name = "Roxas";
		this->age = 19;
		this->marks = 95.34;
	};
	Student(string n, int a, float m)
	{
		this->name = n;
		this->age = a;
		this->marks = m;
	};
	void getData()
	{
		cout << "Name: " << this->name << "\nAge: " << this->age << "\nMarks: " << this->marks << endl;
	};
};

int main()
{
	Student a1, a2("Jeffrey", 19, 87.5);

	a1.getData();
	a2.getData();

	return 0;
}