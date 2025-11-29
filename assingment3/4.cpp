#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> nextGreaterElements(const vector<int> &nums)
{
	int n = nums.size();
	vector<int> result(n);
	stack<int> s;

	for (int i = n - 1; i >= 0; i--)
	{
		int current = nums[i];

		while (!s.empty() && s.top() <= current)
		{
			s.pop();
		};

		if (s.empty())
		{
			result[i] = -1;
		}
		else
		{
			result[i] = s.top();
		};
		s.push(current);
	};
	return result;
};

int main()
{
	// vector<int> nums = {4, 12, 5, 3, 1, 2, 5, 3, 1, 2, 4, 6};
	vector<int> nums = {2, 1, 5};
	vector<int> nge = nextGreaterElements(nums);

	cout << "Input array:\t";
	for (int n : nums)
		cout << n << "\t";
	cout << endl;

	cout << "Next greater element:\t";
	for (int n : nge)
		cout << n << "\t";
	cout << endl;

	return 0;
};