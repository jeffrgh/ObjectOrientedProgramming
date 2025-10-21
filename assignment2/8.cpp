#include <iostream>

using namespace std;

class Calc
{
public:
    int sum(int x, int y)
    {
        return x + y;
    };
    int sum(int x, int y, int z)
    {
        return x + y + z;
    };
};

class Base
{
public:
    virtual void speak()
    {
        cout << "Base sound\n";
    };
};

class Cat : public Base
{
public:
    void speak()
    {
        cout << "Cat meows\n";
    };
};

int main()
{
    Calc c;

    cout << c.sum(5, 3) << endl;
    cout << c.sum(5, 3, 2) << endl;

    Base *b;
    Cat ct;

    b = &ct;
    b->speak();

    return 0;
}