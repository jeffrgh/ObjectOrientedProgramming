#include <iostream>

using namespace std;

class Car
{
private:
	string brand;
	string model;
	float price;

public:
	Car(string b)
	{
		this->brand = b;
		this->model = "NaN";
		this->price = 0.0;
	};
	Car(string b, string m)
	{
		this->brand = b;
		this->model = m;
		this->price = 0.0;
	};
	Car(string b, string m, float p)
	{
		this->brand = b;
		this->model = m;
		this->price = p;
	};
	void get()
	{
		cout << "The car brand and model is " << this->brand << " and " << this->model << " and the price is: " << this->price << endl;
	};
};

int main()
{
	Car c1("Ferarri"), c2("McLaren", "A550"), c3("Maruti Suzuki", "Baleno 2017", 15000.99);

	c1.get();
	c2.get();
	c3.get();

	return 0;
};