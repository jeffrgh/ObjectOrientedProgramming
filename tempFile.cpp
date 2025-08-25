#include <iostream>
#include <string>

using namespace std;

class details
{
// private:
// 	int roll_no;
// 	float marks, m2, m3, m4, m5;
// 	string name;

public:
	void setValue(int rn, float mr, float mr2, float mr3, float mr4, float mr5, string nm)
	{
		int rn;
		float mr;
		float mr2;
		float mr3;
		float mr4;
		float mr5;
		string nm;
	}
	void getValue()
	{
		float avg;
		// cout << marks << endl
		// 	 << m2 << endl
		// 	 << m3 << endl
		// 	 << m4 << endl
		// 	 << m5 << endl;
		avg = ((marks + m2 + m3 + m4 + m5) / 5);
		cout << "Name: " << name << ", Roll NO.: " << roll_no << ", Marks: " << avg;
	}
};

int main()
{
	details d1;
	// d1.name = "Roxas";
	// d1.roll_no = 69;
	// d1.marks = 99.8;
	d1.setValue(69, 99.1, 98.5, 99.9, 97.3, 99.8, "Roxas");

	d1.getValue();

	return 0;
}