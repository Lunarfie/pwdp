#include <iostream>
#include <string>

using namespace std;
int main() {
    string slowo;
    cout << "Podaj slowo: ";
    cin >> slowo;

    cout <<"Tekst w kolorze: ";
    
    for (int i=0; i <slowo.length(); ++i) {
        if(i%2 ==0) {
            cout << "\033[31m" <<slowo[i];
        } else {
            cout << "\033[32m" << slowo[i];
        }

    }

    cout << "\033[0m" << endl;
    


}
