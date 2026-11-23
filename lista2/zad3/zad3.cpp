#include <iostream>
#include <string>

using namespace std;
int main() {
    string zielony = "\033[32m";
    cout << zielony << "Martyna "; 

    string czerwony = "\033[31m";
    cout << czerwony << "C";
}