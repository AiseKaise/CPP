#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int size, int key) {

    int start = 0;
    int end = size - 1;
    int ans = -1;
    
    int mid = start + (end - start) / 2;

    while(start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else if (key < arr[mid]) {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key) {

    int start = 0;
    int end = size - 1;
    int ans = -1;
    
    int mid = start + (end - start) / 2;

    while(start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else if (key < arr[mid]) {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){

    int even[6] = {1,2,3,3,3,5};

    cout << " First Occurrence of the given Number is " << firstOcc(even, 6, 3) << endl;
    cout << " Last Occurrence of the given Number is " << lastOcc(even, 6, 3) << endl;

    return 0;
    
}