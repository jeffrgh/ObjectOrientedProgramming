#include <iostream>

using namespace std;

class Person
{
public:
    string p_name;
    void set_P(string n)
    {
        p_name = n;
    };
};

class Athlete
{
public:
    string a_name;
    void set_A(string n)
    {
        a_name = n;
    };
};

class SportsPerson : public Person, public Athlete
{
public:
    void show()
    {
        cout << "person: " << Person::p_name << endl;
        cout << "athlete: " << Athlete::a_name << endl;
    };
};

int main()
{
    SportsPerson s;

    s.set_P("Jeffrey");
    s.set_A("Roxas");

    s.show();

    return 0;
}