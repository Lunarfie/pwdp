#include <iostream>
#include <format>

using namespace std;
int main() {
    cout << " ";
    for(int i=1; i<=10; ++i) {
        cout << format(" {:4}", i); //prawa strona szeroka o 4 znaki
    }
    cout << "\n ____________________________________________ \n"; //pozioma linia(ladniej wyglda xd)

    for (int i=1; i<=10; ++i) {
        cout << format("{:2} |", i);
        for (int j=1; j<=10; ++j) {
            cout << format("{:4} ", i*j);
        }
        cout << "\n";
    }
}