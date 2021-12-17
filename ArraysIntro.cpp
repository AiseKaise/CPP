#include <bits/stdc++.h>
using namespace std;


void printArray(int arr[], int size){
    cout << endl << " Printing the Arrays: " <<  " ";

    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl << " Printing DONE " << endl;
}

int main(){


    //Declaring the Arrays
    int number[15];

    //accessing the arrays
    cout << endl << "value of the following arrays is " << number[3] << endl;

    int second[15] = {5, 7, 9}; 
    int n = 15;
    printArray(second, 10);

    int third[40] = {0};
    int j = 40;
    printArray(third, 10);


    cout << endl << " Everything Is Fine " << endl << endl;


}