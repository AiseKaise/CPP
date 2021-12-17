#include <bits/stdc++.h>
using namespace std;

int power(int num1, int num2) {
    int ans = 1;

    for(int i; i <= num2; i++){
        ans = ans * num1;
    }

    return ans;
   
}

int main(){
    int a, b;
    cin >> a >> b;

    int answer = power(a, b);
    cout << "The answer is " << answer << endl;

}

