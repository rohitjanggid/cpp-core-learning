#include<iostream>

using namespace std;

void sortArr(int arr[], int n){

    // base case
    if(n == 0 || n == 1){
        return;
    }

    for(int i = 0; i<n; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    sortArr(arr, n-1);
}

int main(){

    int arr[5] = {2, 5, 1, 6, 9};

    sortArr(arr, 5);

    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}