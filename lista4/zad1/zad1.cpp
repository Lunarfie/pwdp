#include <iostream>
#include <fstream>

using namespace std;
 int main() {
    ofstream plik("szachownica.pgm");

    int szerokosc = 800;
    int wysokosc = 800;
    int rozmiarpola = 100;
    int maxwartosc = 255;

    plik << "P2\n";
    plik << szerokosc << " " << wysokosc << "\n";
    plik << maxwartosc << "\n";

    for (int y=0; y < wysokosc; ++y) {
        for(int x=0; x < szerokosc; ++x) {
            int wierszszachownicy = y/ rozmiarpola;
            int kolumnaszachownicy = x/ rozmiarpola;
            
            if ((wierszszachownicy + kolumnaszachownicy) % 2 == 0 ) {
                plik << 255 << " ";
            } else {
                plik << 0 << " ";
            }


        }
        plik << "\n";
    }
    
 }