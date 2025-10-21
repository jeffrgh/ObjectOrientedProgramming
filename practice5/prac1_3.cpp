#include <iostream>

using namespace std;

void findArea(class rect r);

class rect
{
private:
	float length;
	float breadth;

public:
	rect(float l, float b)
	{
		this->length = l;
		this->breadth = b;
	};

	friend void findArea(class rect r);
};

void findArea(class rect r)
{
	cout << "The area of the rectangle will be: " << r.length * r.breadth << endl;
};

int main()
{
	rect r(15, 20);

	findArea(r);

	return 0;
};