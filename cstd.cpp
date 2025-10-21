#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

namespace somename
{
	float abs(int n)
	{
		return 99.00;
		// return 99 + n;
	};
};

// int abs(int n)
// {
// 	return 99;
// };

using namespace somename;

int main()
{
	int a = -5;
	// int b = somename ::abs(a);
	int b = abs(a);
	cout
		<< "Value of B is: " << b << endl;

	return 0;
};