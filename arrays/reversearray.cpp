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



void reverse(int arr[],int size){

    int start = 0;
    int end = size - 1;
    int temp;

    while(start <= end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}



int main(){

    int arr[10] = {1, 4, 2, 5, 4, 6, 5, 7, 8,10};
    int arr2[3] = {2, 3, 5};

    printArray(arr, 10);

    reverse(arr, 10);

    printArray(arr, 10);


    printArray(arr2, 3);

    reverse(arr2, 3);

    printArray(arr2, 3);

    return 0;
}