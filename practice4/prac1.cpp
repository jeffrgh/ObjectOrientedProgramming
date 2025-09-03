#include <iostream>

using namespace std;

class rectangle
{
private:
	float length;
	float breadth;

public:
	rectangle(float len, float bread)
	{
		this->length = len;
		this->breadth = bread;
	};

	void calculateArea()
	{
		cout << "Area is: " << this->length * this->breadth;
	};
};

int main()
{
	rectangle r(15, 35);

	r.calculateArea();

	return 0;
}