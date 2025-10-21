#include <iostream>
using namespace std;
// inheritance
class university
{ // base class
	// pubic:
protected:
	int id;
	string name;

public:
	university(int id, string name)
	{
		this->name = name;
		this->id = id;
	}
	void get_details()
	{
		cout << "university name is " << name << " id: " << id << endl;
	}
};
// name of the class : access_type name_of_base_clas
class student : public university
{ // derived class
private:
	// int id ;
	// string name;
	int course_code;
	string school;

public:
	student(int id, int course_dode, string name, string school) : university(id, name)
	{ // constructor of derived class
		// this->id = id;
		// this->name = name;
		this->course_code = course_dode;
		this->school = school;
	}
	void get_details()
	{
		cout << "student name is " << name << " id: " << id << " course code :" << course_code << " school :" << school << endl;
	}
};

int main()
{
	university u1(123, "santha");
	u1.get_details();

	student s1(123, 02, "santha", "SCDS");
	s1.get_details();
	university u1(123, "Santha");
	u1.get_details();
	students s1(123, 02, "Santha", "SCDS");
	s1.get_details();
	return 0;
}