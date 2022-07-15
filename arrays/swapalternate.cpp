#include<iostream>
using namespace std;

void reverseAlternative(int arr[], int size){

    int temp;

    for (int i = 0; i < size; i+=2){

        // checl for i+1 less than size.
        if(i+1 < size){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

void printArray(int arr[], int size){

    // Printing the array in this functon.
    cout << "Printing the array!" << endl;

    for (int i = 0; i <size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Printing the array done" << endl;
}



int main(){

    int arr[5] = {1,2,3,4,5};
    int arr1[6] = {1, 2, 3, 4, 5, 6};

    printArray(arr,5);
    reverseAlternative(arr,5);
    printArray(arr, 5);

    printArray(arr1, 6);
    reverseAlternative(arr1, 6);
    printArray(arr1, 6);

    return 0;
}