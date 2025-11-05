#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<char, int> mp;
	// int arr[] = {1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4};
	char arr[] = {'a', 'a', 'b', 'b', 'b', 'b', 'c', 'c', 'c', 'c', 'c', 'c', 'd', 'd'};
	int n = sizeof(arr) / sizeof(char);
	for (int j = 0; j < n; j++)
	{
		mp[arr[j]] += 1;
	};
	for (auto k : mp)
	{
		cout << k.first << " Appears " << k.second << " times." << endl;
	};

	return 0;
};