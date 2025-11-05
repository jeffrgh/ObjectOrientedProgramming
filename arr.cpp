#include <iostream>

using namespace std;

int main()
{
	int arr[] = {1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4};
	int check[] = {0, 0, 0, 0};
	int nAn = 0;
	int i = 0;
	while (i < sizeof(arr) / sizeof(int))
	{
		if (arr[i] == 1)
		{
			check[0] += 1;
		}
		else if (arr[i] == 2)
		{
			check[1] += 1;
		}
		else if (arr[i] == 3)
		{
			check[2] += 1;
		}
		else if (arr[i] == 4)
		{
			check[3] += 1;
		}
		else
		{
			nAn++;
		};
		i++;
	};

	cout << "Number of times 1 repeated: " << check[0] << endl;
	cout << "Number of times 2 repeated: " << check[1] << endl;
	cout << "Number of times 3 repeated: " << check[2] << endl;
	cout << "Number of times 4 repeated: " << check[3] << endl;

	return 0;
};