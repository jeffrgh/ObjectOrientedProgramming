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
	// void setValue(int rn, float mr, float mr2, float mr3, float mr4, float mr5, string nm)
	// {
	// 	roll_no = rn;
	// 	marks = mr;
	// 	m2 = mr2;
	// 	m3 = mr3;
	// 	m4 = mr4;
	// 	m5 = mr5;
	// 	name = nm;
	// }
	void getValue(int rn, float mr, float mr2, float mr3, float mr4, float mr5, string nm)
	{
		float avg;
		// cout << marks << endl
		// 	 << m2 << endl
		// 	 << m3 << endl
		// 	 << m4 << endl
		// 	 << m5 << endl;
		avg = ((mr + mr2 + mr3 + mr4 + mr5) / 5);
		cout << "Name: " << nm << ", Roll NO.: " << rn << ", Marks: " << avg;
	}
};

int main()
{
	details d1;
	// d1.name = "Roxas";
	// d1.roll_no = 69;
	// d1.marks = 99.8;
	d1.getValue(69, 99.1, 98.5, 99.9, 97.3, 99.8, "Roxas");

	// d1.getValue();

	return 0;
}