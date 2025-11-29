#include <iostream>
#include <vector>

using namespace std;

class interval
{
private:
	int start;
	int end;

public:
	interval(int s, int e)
	{
		this->start = s;
		this->end = e;
	};

	int getStart() const
	{
		return start;
	};

	int getEnd() const
	{
		return end;
	};

	void setEnd(int e)
	{
		end = e;
	};
};

void sort(vector<interval> &intervals)
{
	int n = intervals.size();
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (intervals[i].getStart() > intervals[j + 1].getStart())
			{
				interval temp = intervals[j];
				intervals[j] = intervals[j + 1];
				intervals[j + 1] = temp;
			};
		};
	};
};

namespace myLib
{
	int max(int a, int b)
	{
		return a > b ? a : b;
	};
};

vector<interval> merge(vector<interval> intervals)
{
	if (intervals.size() <= 1)
	{
		return intervals;
	};

	sort(intervals);

	vector<interval> merged;

	merged.push_back(intervals[0]);

	for (int i = 1; i < intervals.size(); i++)
	{
		int lastIndex = merged.size() - 1;
		int currentStart = intervals[i].getStart();
		int currentEnd = intervals[i].getEnd();
		int lastEnd = merged[lastIndex].getEnd();

		if (currentStart <= lastEnd)
		{
			int newEnd = myLib::max(lastEnd, currentEnd);
			merged[lastIndex].setEnd(newEnd);
		}
		else
		{
			merged.push_back(intervals[i]);
		};
	};
	return merged;
};

int main()
{
	vector<interval> intervals;
	intervals.push_back(interval(1, 3));
	intervals.push_back(interval(2, 6));
	intervals.push_back(interval(8, 10));
	intervals.push_back(interval(15, 18));

	vector<interval> result = merge(intervals);

	cout << "Merged intervals: " << endl;
	for (int i = 0; i < result.size(); i++)
	{
		cout << "[" << result[i].getStart() << ", " << result[i].getEnd() << "] ";
	};
	cout << endl;

	return 0;
};