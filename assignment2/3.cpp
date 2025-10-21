#include <iostream>

using namespace std;

class Shape{
    protected:
        int l;
        int b;
    public:
        void Set_Value (int l, int b){
            this -> l = l;
            this -> b = b;
        };
};

class Rectangle : public Shape{
    public :
        void perimeter (){
        cout << "Perimeter: " << 2 * (l + b) << endl;
        };
    void area(){
        cout << "Area: " << l * b << endl;
    };
};

int main(){
    Rectangle R1;

    R1.Set_Value(7,8);

    R1.perimeter();

    R1.area();

    return 0;
}