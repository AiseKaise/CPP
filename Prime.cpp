#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool flag = 0;

    for(int i = 1; i <= sqrt(n); i++){
        if(n % 1 == 0){
            cout << "Not Prime" << endl;
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout << "Prime" << endl;
    }
}