#include <iostream>

using namespace std;

class Distance
{
private:
	float feet, inches;

public:
	Distance()
	{
		this->feet = 0;
		this->inches = 0;
	};
	Distance(float feet)
	{
		this->feet = feet;
		this->inches = 0;
	};
	Distance(float feet, float inches)
	{
		this->feet = feet;
		this->inches = inches;
	};
	void getDistance()
	{
		cout << "The feet and inches are: " << this->feet << "' and " << this->inches << '"' << endl;
	};
};

int main()
{
	Distance d1, d2(15), d3(15, 9);

	d1.getDistance();
	d2.getDistance();
	d3.getDistance();

	return 0;
}