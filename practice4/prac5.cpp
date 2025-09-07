#include <iostream>
#include <ctime>

using namespace std;

class Time
{
private:
	int hours;
	int minutes;
	int seconds;

public:
	Time(int h, int m, int s)
	{
		this->hours = h;
		this->minutes = m;
		this->seconds = s;
	}

	Time(int h, int m)
	{
		this->hours = h;
		this->minutes = m;
		this->seconds = 0;
	}

	Time()
	{
		this->hours = 0;
		this->minutes = 0;
		this->seconds = 0;
	}

	friend void printOutput(Time t);
};

void printOutput(Time t)
{
	cout << "The time is: " << t.hours << ":" << t.minutes << ":" << t.seconds << endl;
}

int main()
{
	Time t1, t2(14, 39), t3(13, 52, 58);

	printOutput(t1);
	printOutput(t2);
	printOutput(t3);

	return 0;
}