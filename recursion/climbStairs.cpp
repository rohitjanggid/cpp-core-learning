// You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.
// Each time, you can climb either one step or two steps.

#include<iostream>

using namespace std;

int sumStairs(int n){
    // base case 
    if(n < 0){
        return 0;
    }
    else if(n == 0){
        return 1;
    }

    return sumStairs(n-1) + sumStairs(n-2);
}

int main(){
    int n;
    cout<<"enter your stairs: ";
    cin>>n;

    cout<<sumStairs(n)<<endl;
}