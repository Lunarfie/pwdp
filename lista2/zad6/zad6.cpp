#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string napis;
    cout << "Wpisz napis: ";
    cin >> napis;

    cout << "Postac w kodowaniu base16: ";

    for (auto litera: napis)
{
   cout << hex << uppercase << setw(2) << setfill('0')
   << static_cast<int>(static_cast<unsigned char>(litera));
}

}