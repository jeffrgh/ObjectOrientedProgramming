#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

vector<int> topKFfrequeunt(vector<int> &nums, int k)
{
	unordered_map<int, int> countMap;
	for (int num : nums)
	{
		countMap[num]++;
	};

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

	for (auto const &[num, freq] : countMap)
	{
		minHeap.push({freq, num});

		if (minHeap.size() > k)
		{
			minHeap.pop();
		};
	};

	vector<int> result;
	while (!minHeap.empty())
	{
		result.push_back(minHeap.top().second);
		minHeap.pop();
	};

	return result;
};

int main()
{
	vector<int> nums = {1, 1, 1, 2, 2, 3};
	int k = 2;

	vector<int> result = topKFfrequeunt(nums, k);

	cout << "The top " << k << " frequent elements are: ";
	for (int num : result)
	{
		cout << num << ", ";
	};
	cout << endl;

	return 0;
};