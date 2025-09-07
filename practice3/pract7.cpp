#include <iostream>

using namespace std;

class Circle
{
private:
	float radius;

public:
	void setRadius(float rad)
	{
		this->radius = rad;
	};
	float getRadius()
	{
		cout << "The radius is: " << this->radius << endl;
		return this->radius;
	};
	void getArea(float radi)
	{
		cout << "The area is: " << radi * radi * 3.14 << endl;
	};
};

int main()
{
	Circle c1, c2, c3;

	c1.setRadius(15.4);
	c2.setRadius(16.3);
	c3.setRadius(17.2);

	c1.getArea(c1.getRadius());
	c2.getArea(c2.getRadius());
	c3.getArea(c3.getRadius());

	return 0;
}