#include <iostream>

using namespace std;

class Book
{
private:
	string title;
	float price;

public:
	void setDetails(string t, float p)
	{
		this->title = t;
		this->price = p;
	};
	void getDetails()
	{
		cout << "The title of the book is " << this->title << " and the price is " << this->price << endl;
	};
};

int main()
{
	Book b;
	int al;
	string nm;
	cout << "Enter the name for the book: ";
	cin >> nm;
	cout << "Enter the price for the book: ";
	cin >> al;

	b.setDetails(nm, al);
	b.getDetails();

	return 0;
}