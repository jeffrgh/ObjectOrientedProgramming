#include <iostream>
#include <vector>

using namespace std;

class numberPair
{
private:
	int first;
	int second;

public:
	numberPair(int f, int s)
	{
		this->first = f;
		this->second = s;
	};

	int getFirst() const
	{
		return first;
	};

	int getSecond() const
	{
		return second;
	};
};

void sort(vector<int> &nums)
{
	int n = nums.size();
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			};
		};
	};
};

vector<numberPair> twoSum(vector<int> nums, int target)
{
	vector<numberPair> result;

	sort(nums);

	int left = 0;
	int right = nums.size() - 1;

	while (left < right)
	{
		int sum = nums[left] + nums[right];

		if (sum == target)
		{
			result.push_back(numberPair(nums[left], nums[right]));

			while (left < right && nums[left] == nums[left + 1])
				left++;
			while (right < left && nums[right] == nums[right - 1])
				right--;

			left++;
			right--;
		}
		else if (sum < target)
		{
			left++;
		}
		else
		{
			right--;
		};
	};

	return result;
};

int main()
{
	vector<int> nums = {1, 5, 1, 2, 5, 4, 2};
	int target = 6;

	vector<numberPair> output = twoSum(nums, target);

	cout << "Unique pairs summing to: " << target << endl;

	for (int i = 0; i < output.size(); i++)
	{
		cout << "(" << output[i].getFirst() << ", " << output[i].getSecond() << ")" << endl;
	};

	return 0;
};