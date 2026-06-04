#include<iostream>
using namespace std;

int getSum(int *arr, int size){

    // base case
    if(size == 0){
        return 0;
    }
    else if(size == 1){
        return arr[0];
    }

    int reminingPart = getSum(arr+1, size-1);

    return arr[0] + reminingPart;
}

int main(){

    int arr[5] = {9, 9, 9, 9, 9};

    cout<<getSum(arr, 5);
}