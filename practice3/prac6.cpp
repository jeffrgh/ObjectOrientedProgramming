#include <iostream>

using namespace std;

class Car
{
private:
	string brand;
	string model;

public:
	void set(string b, string m)
	{
		this->brand = b;
		this->model = m;
	};
	void get()
	{
		cout << "The brand and model of the car is: " << this->brand << " and " << this->model << endl;
	};
};

int main()
{
	Car c1, c2, c3;
	c1.set("Maruti Suzuki", "Baleno");
	c2.set("Audi", "IDK");
	c3.set("Ferrari", "Charles LeClerk");

	c1.get();
	c2.get();
	c3.get();

	return 0;
};