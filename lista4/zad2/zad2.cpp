#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int  main() {
    ifstream plik("moj_obrazek_0.pgm");
    string format;
    int szerokosc, wysokosc, maxwartosc;
    plik >> format;
    plik >> szerokosc;
    plik >> wysokosc;
    plik >> maxwartosc;

    string paleta= " ..,:;!=oxO#%@";
    int dlugoscpalety = paleta.length();

    for(int y=0; y<wysokosc; ++y) {
        for(int x=0; x<szerokosc; ++x) {
            int piksel;
            plik >> piksel;
            int indeks = (piksel *(dlugoscpalety - 1))/maxwartosc;
            cout << paleta[indeks];

        }
        cout<< "\n";
    }

}