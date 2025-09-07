#include <iostream>

using namespace std;

class University
{
private:
	string name;
	int ranking;

public:
	void set(string n, int r)
	{
		this->name = n;
		this->ranking = r;
	}
	void get()
	{
		cout << "Your name and ranking is " << this->name << " and " << this->ranking << endl;
	}
};

int main()
{
	University u1, u2, u3;

	u1.set("Jeffrey", 8);
	u2.set("Roxas", 9);
	u3.set("IDK", 999);

	u1.get();
	u2.get();
	u3.get();

	return 0;
}