#include <iostream>
#include <vector>
using namespace std;

long long int tempSol(int n){
    int start = 0;
    int end = n;
    int ans = 0;
    while(start <= end){
        int mid = start + (end - start)/2;
        long long int square = mid * mid;
        if(square > n){
            end = mid -1;
        }
        else if(square < n){
            ans = mid;
            start = mid + 1;
        }
        else{
            return mid;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter your value: ";
    cin>>n;
    cout<<n<<" sqrt is: "<<tempSol(n);
}