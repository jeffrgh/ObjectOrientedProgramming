#include <iostream>

using namespace std;

class university
{
private:
	string name;
	int id;

public:
	university(string name, int id)
	{
		this->name = name;
		this->id = id;
		cout << "A new member has been created with the name and id: " << name << " and " << id << endl;
	};
	void getDetails()
	{
		cout << "Name: " << this->name << "\nID: " << this->id << endl;
	};
};

// name of the derived class : access specifier base class
class students : public university
{
private:
	string school;

public:
	students(string name, int id, string school) : university(name, id)
	{
		this->school = school;
	};

	void getStudentDetails()
	{
		getDetails();
		cout << "School: " << school << endl;
	};
};

int main()
{
	students s1("Roxas", 13, "CDS"), s2("Abishek", 14, "CDS"), s3("Shivani", 15, "SAS");
	s1.getStudentDetails();
	s2.getStudentDetails();
	s3.getStudentDetails();

	return 0;
}