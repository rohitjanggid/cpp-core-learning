#include <iostream>
#include <vector>
using namespace std;

int findPiovt(vector<int>& arr){
    int s = 0;
    int e = arr.size()-1;
    while(s<e){
        int mid = s + (e - s)/2;
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}


int main(){
    vector<int> arr = {3, 8, 10, 17, 1};
    cout<<"Pivot Index is: "<<findPiovt(arr);
}