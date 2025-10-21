#include <iostream>

using namespace std;

class c
{
private:
	int a;

public:
	c()
	{
		this->a = 5;
	};

	void printVar()
	{
		cout << "Variable: " << this->a << endl;
	};
};

int main()
{
	c a;

	a.printVar();

	return 0;
};