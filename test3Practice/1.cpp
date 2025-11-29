#include <iostream>

using namespace std;

class Content
{
protected:
	string title;

public:
	Content(string t) : title(t) {};
	virtual void display() = 0;
	virtual ~Content()
	{
		cout << "Destroying." << endl;
	};
};

class Video : public Content
{
private:
	int duration;

public:
	Video(string t, int d) : Content(t), duration(d) {};
	void display()
	{
		cout << "Printing duration." << endl;
	};
};

class Article : public Content
{
private:
	int wordCount;

public:
	Article(string t, int w) : Content(t), wordCount(w) {};
	void display()
	{
		cout << "Printing word count." << endl;
	};
};

class Quiz : public Content
{
private:
	int numberOfQuestions;

public:
	Quiz(string t, int n) : Content(t), numberOfQuestions(n) {};
	void display()
	{
		cout << "Printing number of questions." << endl;
	};
};

int main()
{
	Content *c1 = new Video("Hi", 1);
	Content *c2 = new Article("Hello", 2);
	Content *c3 = new Quiz("Heya", 3);

	c1->display();
	c2->display();
	c3->display();

	if (Video *v = dynamic_cast<Video *>(c1))
	{
		cout << "Object 1 is confirmed to be a Video." << endl;
	}

	if (Video *v = dynamic_cast<Video *>(c2))
	{
		cout << "Object 2 is a Video." << endl;
	}
	else
	{
		cout << "Object 2 is NOT a Video (Cast failed)." << endl;
	}

	delete c1;
	delete c2;
	delete c3;

	return 0;
};