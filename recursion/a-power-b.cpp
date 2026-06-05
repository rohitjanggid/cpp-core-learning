#include<iostream>

using namespace std;

int power(int a, int b){
    
    // base case
    if(b == 0){
        return 1;
    }
    else if(b == 1){
        return a;
    }

    int ans = power(a, b/2);

    // if b is even
    if(b%2 == 0){
        return ans * ans;
    }
    // if b is odd
    else{
        return a * ans * ans;
    }
}

int main(){
    int a, b;
    cout<<"Enter value a: ";
    cin>>a;
    cout<<"Entre value b: ";
    cin>>b;

    cout<<power(a, b);
}