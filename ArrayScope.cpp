#include <bits/stdc++.h>
using namespace std;

void update(int arr[], int n){

    cout << "Inside The Function" << endl;


    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }

    cout << endl << "Going Back To Main Function" << endl;

}

int main(){

    int arr[3] = {1, 2, 3};

    update(arr, 3);

    cout << endl << "Printing The Main Function" << endl;
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
    
}