#include <iostream>

using namespace std;

class Dictionary{
    string keys[100];
    string values[100];
    int count;
    public:
        Dictionary(){
            count = 0;
        };

        void insert(string key, string value){
            if (count < 100){
                keys[count] = key;
                values[count] = value;
                count++;
            } else {
                cout << "Dictionary full" << endl;
            };
        };
        void search (string key) {
            for (int i = 0; i < count; i++){
                if (keys[i] == key) {
                cout<< "Key-Value Found: "<< values[i] << endl<<endl;
                return;
                };
            };
            cout << "Key-Value Not Found." << endl;
        };
        void display(){
            cout << "Dictionary: \n";
            for (int i = 0; i < count; i++) {
                cout << keys[i] << " : " << values[i] << endl;
            };
        };
};

int main(){
    Dictionary D1;

    D1.insert("Playstation" , "Kratos");
    D1.insert ("Nintendo" , "Mario");
    D1.insert("Xbox" , "Master Chief");

    D1.search("Xbox");

    D1.display();

    return 0;
}