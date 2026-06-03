#include<iostream>
#include<vector>

using namespace std;

void sayDigit(string arr[], int n){
    // base case 
    if(n == 0){
        return;
    }

    // processing 
    int digit = n%10;
    n = n/10;

    sayDigit(arr, n);
    cout<<arr[digit]<<" "; 

}

int main(){

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cout<<"Enter your digit: ";
    cin>>n;

    sayDigit(arr, n);
}