#include <iostream>

using namespace std;

class Temperature
{
private:
	float celcius;

public:
	void setCelcius(float c)
	{
		this->celcius = c;
	};
	void getCelcius()
	{
		cout << "The temperature is " << this->celcius << endl;
	};
};

int main()
{
	Temperature t1, t2, t3;
	t1.setCelcius(15.6);
	t2.setCelcius(24.7);
	t3.setCelcius(32.3);

	t1.getCelcius();
	t2.getCelcius();
	t3.getCelcius();

	return 0;
}