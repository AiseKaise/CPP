#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key) {
    
    for(int i = 0; i < size; i++) {

        if(arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {1, 2, 6, 8, -12, 29, 45, 102, -2, 6}; 
     
     cout << " Enter The Element You Want to Search " << endl;

     int key; 
     cin >> key; 

     bool found = search(arr, 10, key);

     if( found ) {
         cout << "The Element Is Present" << endl;
     }
     else{
         cout << "The Element Is Absent" << endl;
     }
}