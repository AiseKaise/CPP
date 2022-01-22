#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n) {
    
    int start = 0;
    int end = n-1;

    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


void printArray(int arr[], int n) {

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[6] = {3, 4, 9, 10, 92, 8};
    int brr[5] = {8, 0, 21, 33, -10};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6); 
    printArray(arr, 5);

    return 0;
    
}