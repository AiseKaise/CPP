#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> & arr, int n){

    int start = 0;
    int end = n - 1; 
    int mid = start + (end - start) / 2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearch(vector<int> & arr, int start,int end, int key) {
    
    int start = start;
    int end = end;

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

int findPosition(vector<int> & arr, int n, int k){

    int pivot = getPivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n - 1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pivot - 1, k);
    }
}