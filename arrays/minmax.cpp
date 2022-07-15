// Finding the min and max value in a array.
#include<iostream>
#include<limits.h>

using namespace std;


// minimum function.
int getMin(int arr[], int size){

    int minElement = INT_MAX;

    for (int i = 0; i < size; i++){
        if(minElement > arr[i]){
            minElement = arr[i];
        }
    }

    return minElement;
}

// maxmimum function.
int getMax(int arr[],int size){

    int maxElement = INT_MIN;

    for (int i = 0; i < size; i++){
        if(maxElement < arr[i]){
            maxElement = arr[i];
        }
    }

    return maxElement;
}


int main(){

    int size;

    cin >> size;

    int num[100];

    // taking input in an array.
    for (int i = 0; i < size; i++){
        cin >> num[i];
    }

    cout << "Maximum Element in an array" << getMax(num, size) << endl;

    cout << "Minimum Element in an array" << getMin(num, size) << endl;
    return 0;
}

// Sum of array problem.
/*

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// sum function.
int sum(int arr[], int size){
    
    int sumOfArray = 0;
    
    for(int i = 0; i < size; i++){
        sumOfArray = sumOfArray + arr[i];
    }
    
    return sumOfArray;
}


int main() {
    
    int size;
    
    cin >> size;
    
    int num[100];
    
    for (int i = 0; i < size; i++){
        
        cin >> num[i];
    }
    
    cout << "Sum of array is:- " << sum(num,size);

    return 0;
}

*/