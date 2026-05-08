#include<iostream>
using namespace std;

void swapAlt(int arr[], int n){
    for(int i = 0; i<n-1; i+= 2){
    swap(arr[i], arr[i+1]);
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    swapAlt(arr, 5);

    printArr(arr, 5);
}