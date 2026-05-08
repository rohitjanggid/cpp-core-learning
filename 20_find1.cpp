#include <iostream>
using namespace std;

bool find1(int arr[], int n, int key){
    int value;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            value = arr[i];
        }
    }
    return value == key;
}

int main(){
    int arr[5] = {2, 0, 5, 4, 9};
    int key;
    cout<<"enter your key: ";
    cin>>key;
    if(find1(arr, 5, key) == 1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}