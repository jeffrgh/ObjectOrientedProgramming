#include <iostream>

using namespace std;

class Rectangle
{
private:
	float length;
	float breadth;

public:
	void set(float l, float b)
	{
		this->length = l;
		this->breadth = b;
	};
	void get()
	{
		cout << "The area is " << length * breadth << endl;
	};
};

int main()
{
	Rectangle r;
	float len;
	float bdt;

	cout << "Enter the length and breadth of the rectangle: ";
	cin >> len >> bdt;

	r.set(len, bdt);
	r.get();

	return 0;
}