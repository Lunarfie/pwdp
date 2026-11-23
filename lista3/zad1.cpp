#include <iostream>
#include <string>

using namespace std;
int main() {
    std::string slowo;

    cout << "Podaj slowo: ";
    cin >> slowo;

    cout << "Slowo wspak: ";

    for(int i=slowo.length() -1; i>=0; --i) {
        cout << slowo[i];
    }


}