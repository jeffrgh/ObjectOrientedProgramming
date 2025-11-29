#include <iostream>

using namespace std;

class A
{
public:
	virtual void pure() = 0;
};

class B : public A
{
public:
	void pure()
	{
		cout << "This is from class B." << endl;
	};
};

int main()
{
	B b;
	B *b1 = &b;

	b1->pure();

	return 0;
};