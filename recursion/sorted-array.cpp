#include<iostream>
#include<vector>

bool isSorted(int arr[], int size){
    // base case
    if(size == 0 || size == 1){
        return true;
    }
    else if(arr[0] > arr[1]){
        return false;
    }
    else{
        return isSorted(arr + 1, size-1);
    }
}

using namespace std;

int main(){

    int arr[5] = {2, 4, 4, 5, 6};

    cout<<isSorted(arr, 1);
}