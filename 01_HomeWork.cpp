#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, hundred=0,fifty=0,twenty=0,one=0;

    cout << "Enter the number for which you want to check " << endl;
    cin >> n;

    switch (1)
    {
    case 1:
        hundred =hundred+ n/100;
        n =n% 100;
        cout << hundred << " -->100 Rupee Notes" << endl;
    
    case 2:
        fifty = fifty+n/50;
        n %= 50;
        cout << fifty << " -->50 Rupee Notes" << endl;

    case 3:
        twenty =twenty+ n/20;
        n =n% 20;
        cout << twenty << " -->20 Rupee Notes" << endl;

    case 4:
        one =one+ n/1;
        n =n% 1;
        cout << one << " -->1 Rupee Notes" << endl;
            break;
    default:cout<<"Invalid input "<< endl;
        break;
    }
    
}