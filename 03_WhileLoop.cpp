// SUM OF ALL THE NUMBERS

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    int sum = 0;

    while(i <= n){
        sum = sum + i;
        i = i + 1;
    }

    cout << " Value Of Sum is " << sum << endl;

    return 0;
}