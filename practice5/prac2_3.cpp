#include <iostream>

using namespace std;

class student
{
private:
	string name;
	int id;

public:
	student(string n, int i)
	{
		this->name = n;
		this->id = i;
	};
	student(string n)
	{
		this->name = n;
		this->id = 5;
	};
	student(int i)
	{
		this->name = "Namine";
		this->id = i;
	};
	student()
	{
		this->name = "Roxas";
		this->id = 13;
	};

	void printStudent()
	{
		cout << "Name: " << this->name << "\nID: " << this->id << endl;
	};
};

int main()
{
	student s1("Jeffrey", 25), s2("Abhi"), s3(15), s4;

	s1.printStudent();
	s2.printStudent();
	s3.printStudent();
	s4.printStudent();

	return 0;
};