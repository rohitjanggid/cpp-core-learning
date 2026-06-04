#include<iostream> 
using namespace std;

bool findValue(int *arr, int s, int e, int key){

    // base case 
    if(s > e){
        return false;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == key){
        return true;
    }

    else if(arr[mid] < key){
        return findValue(arr, mid+1, e, key);
    }
    else{
        return findValue(arr, s, mid-1, key);
    }
}

int main(){

    int arr[5] = {0, 2, 3, 4, 5};
    int s = 0;
    int e = 4;

    int key;
    cout<<"Enter your key: ";
    cin>>key;

    cout<<findValue(arr, s, e, key);
}