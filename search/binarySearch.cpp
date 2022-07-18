#include <iostream>
using namespace std;


//Binary search function.
int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }

        if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}



int main(){
    int evenArray[6] = {1,2,3,4,5,6};
    int oddArray[5] = {1, 5, 10, 21, 22};


    int evenIndex = binarySearch(evenArray, 6, 6);

    cout << "Index is :- " << evenIndex << endl;

    int oddIndex = binarySearch(oddArray, 5, 32);

    cout << "Index is :- " << oddIndex << endl;

    return 0;
}