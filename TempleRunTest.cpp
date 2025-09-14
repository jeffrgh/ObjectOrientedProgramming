#include <iostream>

using namespace std;

class TempleRun
{
private:
	int score;

public:
	void left();
	void right();
	void getScore();
	TempleRun()
	{
		this->score = 0;
		cout << "Game started with score: " << score << endl;
	};

	friend void bonus(TempleRun *p);
};

void TempleRun ::left()
{
	this->score++;
};

void TempleRun ::right()
{
	this->score++;
};

void TempleRun ::getScore()
{
	cout << "Your score is: " << this->score << endl;
};

void bonus(TempleRun *p)
{
	p->score = p->score + 5;
};

int main()
{
	TempleRun p1;
	p1.left();
	p1.right();
	p1.getScore();
	bonus(&p1);
	p1.getScore();

	return 0;
}