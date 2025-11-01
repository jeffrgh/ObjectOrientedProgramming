#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	vector<int> v1(5, 9); // {size, element} {9, 9, 9, 9, 9}

	auto it = v1.begin(); // pointing to the first element of v1
	cout << "Element is: " << *it << endl;
	cout << "The size of the vector is: " << v1.size() << endl;
	v1.insert(v1.begin(), 45);
	v1.insert(v1.end(), 34);
	v1.insert(v1.begin() + 1, 373);
	// cout << "The size of the vector is: " << v1.size();
	v1.erase(v1.begin());
	cout << "Front element is: " << v1.front() << endl;
	v1.pop_back();
	v1.push_back(23);
	auto it1 = v1.rbegin();
	cout << "Element is: " << *it1 << endl;

	v1.insert(v1.begin() + 3, 3, 68);

	// sort(v1.begin(), v1.end());
	sort(v1.end() - 3, v1.end());
	for (int i : v1)
	{
		cout << i << endl;
	};

	set<int> s;
	for (int i : v1)
	{
		s.insert(i);
	};

	for (int j : s)
	{
		cout << j << endl;
	};

	cout << "The size of the vector is: " << v1.size();

	return 0;
};