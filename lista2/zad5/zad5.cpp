#include <iostream>
#include <format>

using namespace std;

int main() {
    char znak = '\n';
    string wynik = format("{:02X}", static_cast<unsigned char>(znak));
    cout << " szesnastkową wartość znaku przejścia do nowej linii: " << wynik;
}