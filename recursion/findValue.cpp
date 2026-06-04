#include<iostream>
#include<vector>

using namespace std;

bool findValue(int *arr, int size, int key){

    // base case
    if(size == 0){
        return false;
    }
    else if(arr[0] == key){
        return true;
    }

    return findValue(arr + 1, size-1, key);
}

int main(){
    int arr[5] = {3, 4, 5, 1, 9};
    int key;
    cout<<"Enter key value: ";
    cin>>key;

    cout<<findValue(arr, 5,  key);
}