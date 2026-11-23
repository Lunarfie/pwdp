#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cos[10];
    std::cout<<sizeof(cos);

    cout << "Rozmiar a:" << sizeof("a") << " bajty\n";
    cout << "Rozmiar ą:" << sizeof("ą") << " bajty\n";

    string s1 = "1";
    string s2 = "jakis tekst";

    cout << "Rozmiar s1: " << sizeof(s1) << " bajtow\n";
    cout << "Rozmiar s2: " << sizeof(s2) << " bajtow\n";


   
   
}