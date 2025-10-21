#include <iostream>

using namespace std;

class copyCons
{
private:
	int val;

public:
	copyCons(int v)
	{
		this->val = v;
	};

	copyCons(const copyCons &c)
	{
		this->val = c.val;
	};

	void print()
	{
		cout << "Printing: " << val << endl;
	};
};

int main()
{
	copyCons c(5);
	copyCons c1 = c;

	c1.print();

	return 0;
};