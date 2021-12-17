#include <bits/stdc++.h>
using namespace std;

// 1 -> Prime no.
// 0 -> Not prime no.

bool isPrime(int n) {

    for( int i = 2; i < n; i++ ) {
        //divide hogya h, not a prime no
        if(n % i == 0) {
            return 0;
        }
    }
        return 1;
}

int main(){

    int n;
    cin >> n;

    if(isPrime(n)) {
        cout << "It is a Prime Number" << endl;
    }
    else{
        cout << "Not a Prime Number " << endl;
    }

    
}