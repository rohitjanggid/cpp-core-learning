#include<iostream>
using namespace std;

int count(int n){

    // base case 
    if(n == 1){
        return 1;
    }

    cout<<n<<endl;

    return count(n-1);
}

int main(){

    int n;
    cin>>n;

    cout<<count(n);

    return 0;
}