#include <iostream>

int main()
{
    std::cout<<"Podaj imie:\n";
    std::string imie;
    std::cin >> imie;

    std::cout<<"Podaj nazwisko:\n";
    std::string nazwisko;
    std::cin >> nazwisko;

    std::cout << "Czesc, " << imie << ", " << nazwisko;
}