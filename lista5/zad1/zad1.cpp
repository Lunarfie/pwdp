#include <iostream>

using namespace std;


int suma(int tab[], int size) { 
    int wynik=0; 
    for(int i=0; i<size; i++) { 

        wynik +=tab[i]; 

    } 

    return wynik; 

} 

void print(int tab[], int size) {
    for (int i=0; i<size; i++) {
        cout<<tab[i]<<" ";
    }
    cout<<"\n";
}

void inverse(int tab[], int size) {
    for (int i=0; i<size/2;i++) {
        int temp = tab[i];
        tab[i]=tab[size-1-i];
        tab[size-1-i]=temp;
    }
}

void seq(int tab[], int size, int a0, int r) {
    for (int i=0; i<size; i++) {
        tab[i]=a0+i*r;
    }
}

int main() {
    int a[4] = {1, 2, 3, -5};
    cout << suma(a, 4) << "\n";   // 1
    cout << suma(a, 2) << "\n";   // 3
    cout << suma(a, 0) << "\n";   // 0 

    int b[]={1,2,3};
    cout <<"Przed odwroceniem: ";
    print(b,3);

    inverse(b,3);
    cout<<"Po odwroceniu: ";
    print(b,3);

    int c[5];
    seq(c,5,10,3);
    cout<<"ciag arytmetyczny: ";
    print(c,5);

}
