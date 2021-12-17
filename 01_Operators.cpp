#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter Your Value" << endl;
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0){
        cout << "Number is divisiable by 2 and 3" << endl;
    }
    
    else if (n % 2 == 0){
        cout << "Number is divisible only by 2" << endl;
    }

    else if (n % 3 == 0){
        cout << "Number is divisiable only by 3" << endl;
    }
    
    else{
        cout << "Divisiable by none" << endl;
    }
}