#include <iostream>

using namespace std;

class xy_cords
{
private:
	float x;
	float y;

public:
	void set_value(float a1, float a2);
	void get_value(void);

	// constructor

	xy_cords()
	{ // default constructor
		cout << "Hello world !" << endl;
		this->x = 69;
		this->y = 420;
	};
	xy_cords(float n1, float n2)
	{
		this->x = n1;
		this->y = n2;
	};
	xy_cords(float n3)
	{
		this->x = n3;
		this->y = n3 * 55;
	};
};
void xy_cords ::set_value(float a1, float a2)
{
	this->x = a1;
	this->y = a2;
};
void xy_cords ::get_value(void)
{
	cout << " x : " << this->x << " y : " << this->y << endl;
}
int main()
{
	xy_cords s1, s2(3, 4), s3(5);
	// s1.set_value(4, 10);
	s1.get_value();
	// s2.set_value(5, 11);
	s2.get_value();
	s3.get_value();

	return 0;
}