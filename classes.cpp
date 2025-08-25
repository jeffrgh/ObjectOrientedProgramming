#include <iostream>
#include <string>

using namespace std;

class details
{
private:
	int roll_no;
	float marks;
	string name;

public:
	void setValue(int rn, float mr, string nm)
	{
		roll_no = rn;
		marks = mr;
		name = nm;
	}
	void getValue()
	{
		cout << "Name: " << name << ", Roll NO.: " << roll_no << ", Marks: " << marks;
	}
};

int main()
{
	details d1;
	// d1.name = "Roxas";
	// d1.roll_no = 69;
	// d1.marks = 99.8;
	d1.setValue(69, 99.8, "Roxas");

	d1.getValue();

	return 0;
}