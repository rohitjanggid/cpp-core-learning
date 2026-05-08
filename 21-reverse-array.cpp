#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[6] = {4, 5, -2, 0, 7, 3};
    int arr2[5] = {3, 5, 2, 8, 5};

    reverse(arr1, 6);
    reverse(arr2, 5);

    printArr(arr1, 6);
    printArr(arr2, 5);
}