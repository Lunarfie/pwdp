#include <iostream>

using namespace std;
int main() {
    long long c;
    cout << "Podaj poczatkowa liczbe c: ";
    cin >> c;

    cout << " Kolejne elementy ciagu Collatza: \n";

    for (int i=0; i<20; ++i) {
        cout << c << " ";

        if (c% 2 ==0) { //sprawdza czy jest parzysta
            c= c/2;
        } else {
            c = 3*c +1;
        }
    }

}