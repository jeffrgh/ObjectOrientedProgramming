#include <iostream>

using namespace std;

class bankacc
{
private:
    string name;
    int acc_num;
    float bal;

public:
    bankacc(string n, int a, float b)
    {
        this->name = n;
        this->acc_num = a;
        this->bal = b;
    };

    void dep(float amt)
    {
        if (amt > 0)
            bal += amt;
    };

    void wd(float amt)
    {
        if (amt > 0 && amt <= bal)
            bal -= amt;
        else
            cout << "Not enough balance.\n";
    };

    void show()
    {
        cout << "Name:" << name << "\nAcc:" << acc_num << "\nBal:$" << bal << endl;
    };
};

int main()
{
    bankacc b1("Jeffrey", 10300451, 21350);

    b1.dep(200);
    b1.show();

    b1.wd(100);
    b1.show();

    return 0;
}