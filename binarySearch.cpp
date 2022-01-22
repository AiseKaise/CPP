#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main(){

    int even[6] = {2,4,8,12,18,20};
    int odd[5] = {32,62,76,123,433};

    int evenIndex = binarySearch(even, 6, 12);
    int oddIndex = binarySearch(odd, 5, 62);

    cout << " Index of 12 is " << evenIndex << endl;
    cout << " Index od 62 is " << oddIndex << endl;

    return 0;
}
