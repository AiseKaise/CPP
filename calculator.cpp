#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;

    cout << "Enter The Value of a" << endl;
    cin >> a;

    cout << "Enter The Value of b" << endl;
    cin >> b;

    char op;
    cout << "Enter The Value of Operator You Want To Perform" << endl;
    cin >> op;

    switch ( op ) {
        case '+': cout << (a + b) << endl;
                    break;

        case '-': cout << (a - b) << endl;
                    break;

        case '/': cout << (a / b) << endl;
                    break;

        case '*': cout << (a * b) << endl;
                    break;

        case '%': cout << (a % b) << endl;
                    break;

        default: cout << "Please Enter a Valid Operation" << endl;
    }
    
}