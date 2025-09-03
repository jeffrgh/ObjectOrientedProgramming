#include <iostream>

using namespace std;

int main()
{
	int a = 1;
	while (a <= 50)
	{
		if (a % 2 != 0)
		{
			cout << a << "\t";
		}
		a++;
	}

	return 0;
}