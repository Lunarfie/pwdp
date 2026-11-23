#include <iostream>
#include <iomanip> //sluzy do ulamkow

using namespace std;

int main() {
 long long N = 100000000; 
 double suma = 0.0;

 for (long long i=0; i<N; ++i) { //i zaczyna sie od zera a konczy na n-1
        double x = static_cast<double>(i) / N; //oblicza x w przedziale od 0 do 1, zamienia i zeby dosac ulamek a nie 0
        suma += x*x; // oblicza x do kwardatu i dodaje do sumy

 }
 double s = suma / N; 

 cout << fixed << setprecision(10); //fixed wymusza zapis dziesietny bez e i set...10 ustawia wysweitlanie 10 cyfr po przecinku
 cout <<"Przyblizenie calki: " << s;
}