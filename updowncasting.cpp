#include <iostream>

using namespace std;

class base
{
public:
	int a = 4;
};

class derived : public base
{
public:
	int b = 5;
	int c = 6;
};

int main()
{
	base ob;
	base *obptr = &ob;

	cout << "Value of 'a' in base class " << obptr->a << endl;

	derived od;
	derived *odptr = &od;

	obptr = odptr; // UPcasting # Implicit casting is allowed.
				   // odptr = (derived*)obptr; //DOWNcasting # Explicit casting is used here
};