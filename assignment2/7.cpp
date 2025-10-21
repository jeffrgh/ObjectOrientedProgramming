#include <iostream>

using namespace std;

class Sorter
{
    int arr[100];
    int num = 0;

public:
    void set_value(int n)
    {
        this->num = n;
        cout << "Enter " << n << " Num:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        };
    };

    void disp()
    {
        cout << "Array: ";
        for (int i = 0; i < num; i++)
        {
            cout << arr[i] << " ";
        };
        cout << "\n";
    }

    void bsort()
    {
        for (int i = 0; i < num - 1; i++)
        {
            for (int j = 0; j < num - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int t = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = t;
                };
            };
        };
    };
    void ssort()
    {
        for (int i = 0; i < num - 1; i++)
        {
            int m = i;
            for (int j = i + 1; j < num; j++)
            {
                if (arr[j] < arr[m])
                {
                    m = j;
                };
            };
            int t = arr[i];
            arr[i] = arr[m];
            arr[m] = t;
        };
    };
    void isort()
    {
        for (int i = 1; i < num; i++)
        {
            int k = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > k)
            {
                arr[j + 1] = arr[j];
                j--;
            };
            arr[j + 1] = k;
        };
    };
};

int main()
{
    Sorter s;
    int n;

    cout << "Size: ";
    cin >> n;

    s.set_value(n);

    s.disp();

    s.bsort();
    s.ssort();
    s.isort();

    s.disp();
    s.disp();
    s.disp();

    return 0;
}