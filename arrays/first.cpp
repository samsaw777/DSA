#include <iostream>
using namespace std;


void printArray(int arr[], int size){

    // Printing the array in this functon.
    cout << "Printing the array!" << endl;

    for (int i = 0; i <size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Printing the array done" << endl;
}

// This is the main function.
int main(){

    int arr[10] = {10,20 ,30};

    int newArr[2] = {1, 2};

    int newArrSiz = sizeof(newArr) / sizeof(int);

    cout << newArrSiz << endl;

    cout << newArr[5] << endl;

    // calling the function to print the array.
    printArray(arr, 10);

    return 0;
}