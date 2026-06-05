#include<iostream>

using namespace std;


int main(){
    int a, b;
    cout<<"Enter value a: ";
    cin>>a;
    cout<<"Entre value b: ";
    cin>>b;

    int ans = 1;

    for(int i = 1; i<=b; i++){
        ans = ans * a;
    }

    cout<<"a power of b is: "<<ans<<endl;
    return 0;
}