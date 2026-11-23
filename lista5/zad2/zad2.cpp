#include <iostream>
#include <algorithm>

using namespace std;

unsigned collatz(unsigned n) {
    if (n%2==0) {
        return n/2;
    } else {
        return 3*n+1;
    }
}



int main() {
    for (unsigned n=1; n<=1000; n++) {
        unsigned current=n;
        unsigned length=1;
        unsigned max_val=n;
    

    while (current !=1) {
        current = collatz(current);
        length++;
        if(current > max_val) {
            max_val=current;
        }
    }
    cout<<n<<"\t"<<length<<"\t"<<max_val<<"\n";

    }

}