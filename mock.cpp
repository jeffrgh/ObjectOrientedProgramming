#include <iostream>

using namespace std;

class my_string
{
private:
	string str;

public:
	my_string(string s)
	{
		this->str = s;
	};

	string capitalize()
	{
		string r;
		char cL;
		for (int i = 0; this->str[i] != '\0'; i++)
		{
			cL = this->str[i];

			if ((cL <= 'z') && (cL >= 'a'))
			{
				char nL;
				nL = cL - 32;
				r += nL;
			}
			else
			{
				r += cL;
			};
		};

		return r;
	};

	string to_lower()
	{
		string r;
		char cL;
		for (int i = 0; this->str[i] != '\0'; i++)
		{
			cL = this->str[i];

			if ((cL <= 'Z') && (cL >= 'A'))
			{
				char nL;
				nL = cL + 32;
				r += nL;
			}
			else
			{
				r += cL;
			};
		};

		return r;
	};
};

int main()
{
	my_string s("Roxas");

	cout << "Uppercase: " << s.capitalize() << endl;
	cout << "Lowercase: " << s.to_lower() << endl;

	return 0;
};