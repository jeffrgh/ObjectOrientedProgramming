#include <iostream>

using namespace std;

class mylist
{
    int arr[100];
    int count;

public:
    mylist()
    {
        count = 0;
    };
    void size()
    {
        cout << "size of list: " << count << endl;
    };

    void insert(int data)
    {
        arr[count++] = data;
    };
    void pop()
    {
        if (count > 0)
        {
            count--;
        }
        else
        {
            cout << "List Empty" << endl;
        };
    };
    void display()
    {
        cout << "List :-\n";
        for (int i = 0; i < count; i++)
            cout << arr[i] << " " << endl;
    };
};
int main()
{
    mylist l1;
    l1.insert(10);

    l1.display();

    l1.insert(20);
    l1.insert(30);
    l1.insert(40);

    l1.display();

    l1.pop();

    l1.display();

    l1.size();

    return 0;
}