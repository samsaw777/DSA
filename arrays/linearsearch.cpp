#include <iostream>
using namespace std;


bool search(int arr[],int size, int key){

    for(int i = 0; i < size; i++){

        if(arr[i] == key){
            return 1;
        }
    }

    return 0;
}



int main(){

    int num[10] = {1, 20, 5, -3, 4, 33, 43, 90, -90, 8};

    int key;

    cout << "Enter the value you want to search :- " << endl;
    cin >> key;

    bool found = search(num, 10, key);

    if(found){
        cout << "Key is present in the array" << endl;
    }
    else{
        cout << "Key is not present in the array" << endl;
    }

    return 0;
}