#include <iostream>

using namespace std;

class Book
{
private:
	string title;
	string author;
	float price;

public:
	Book(string t)
	{
		this->title = t;
		this->author = "NaN";
		this->price = 0.0;
	};
	Book(string t, string a)
	{
		this->title = t;
		this->author = a;
		this->price = 0.0;
	};
	Book(string t, string a, float p)
	{
		this->title = t;
		this->author = a;
		this->price = p;
	};
	void getBook()
	{
		cout << "The title and author of the book is " << this->title << " and " << this->author << " and the price of this book is: " << this->price << endl;
	};
};

int main()
{
	Book b1("Harry Potter and the philosipher's stone"), b2("Harry Potter and the Goblet of Fire", "J.K. Rowling"), b3("Harry Potter and the Half-blood Prince", "J.K. Rowling", 19.99);

	b1.getBook();
	b2.getBook();
	b3.getBook();

	return 0;
}