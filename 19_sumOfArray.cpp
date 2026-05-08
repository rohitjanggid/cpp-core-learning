#include <iostream>
using namespace std;

int sumArray(int arr[], int n){
    int sum = 0;
    for(int i= 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}



int main(){
    int size;
    cout<<"Enter your array size";
    cin>>size;
    int arr[100];
    cout<<"Give your array: ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    cout<<sumArray(arr, size);
}