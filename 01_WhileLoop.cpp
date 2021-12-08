// PRINT THE NUMBER FROM THE STARTING TO THE 'N'

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;

    while(i <= n){
        cout << i << " ";
        i = i + 1;
    }

    return 0;
}