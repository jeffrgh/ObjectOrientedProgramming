#include <iostream>

using namespace std;

int main()
{
	int i, j;
	i = 0;
	j = 0;
	while (j <= 10)
	{
		if (i % 2 == 0)
		{
			cout << i << "\t";
			j++;
		}
		i++;
	}

	return 0;
}