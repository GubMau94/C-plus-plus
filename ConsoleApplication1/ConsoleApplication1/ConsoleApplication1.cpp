#include <iostream>
#include <iomanip>

using namespace std;

template<typename T>
void MyNameIs(T name) {
    cout << "My name is " << name << endl;
}

template<typename T>
void MyNamesAre(T name) {
    cout << "My names are " << name << endl;
}

int main()
{
    /*char symbol;

    cout << "Inserire simbolo: ";
    cin >> symbol;

    for (int j = 1; j < 5; j++) {
        for (int i = 1; i < 10; i++) {
            cout << setw(5) << symbol;
        }
        cout << endl;
    }*/

    string name;

    cout << "Inserire il tuo nome: ";
    cin >> name;

    MyNameIs<string>(name);

    int a = 1;
    MyNameIs<int>(a);

    
    system("pause > 0");
}



