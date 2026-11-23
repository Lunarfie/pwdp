#include <iostream>
#include <string>

using namespace std;
int main() {
    std::string slowo; //zmienaa slowo

    cout << "Podaj slowo: "; //pole do wpisywania << ->pole do wypisywania
    cin >> slowo; // tak zostanie zapisane co napisalismy powyzej

    cout << "Slowo wspak: "; //wypisuje na ekranie pocztek odp << ->wypisywanie przez kompa

    for(int i=slowo.length() -1; i>=0; --i) {  //petla ktorra przejdzie po kazdej literze w string slowo, i=indeks ostatniej litery, i>0 - petla dziala dopoki i=0 czyli pierwsza litera, --i - po kazdym obiegu petli zmniejsza i o 1
        cout << slowo[i]; //wypisuje na ekranie litery wspak az i nie bedzie 0 
    }


}