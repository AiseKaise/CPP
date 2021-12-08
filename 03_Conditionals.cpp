#include <iostream>
using namespace std;

int main(){
     int a;

    cout << " Enter The Value Of A: " << endl;
    cin >> a;

    if(a > 0){
        cout << "A is Positive";
    }
    else{
        if(a < 0){
            cout << "A is Negative";
        }
        else{
            cout << "A is 0";
        }
        
    }

    // Other short way to do this 

    if (a > 0){
        cout << "A is Positive";
    }
    else if (a < 0){
        cout << "A is Negative";
    }
    else{
        cout << "A is 0";
    }




    return 0;
}