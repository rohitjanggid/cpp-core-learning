#include<iostream>
#include<vector>

using namespace std;

int merge(vector<int> &arr, int s, int e){
    int mid = s + (e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy value
    int mainIndexValue = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainIndexValue++];
    }
    for(int i=0; i<len2; i++){
        second[i] = arr[mainIndexValue++];
    }


    // merge 2 Sorted array
    mainIndexValue = s;
    int res = 0;
    int index1 = 0;
    int index2 = 0;
    while(index1 < len1 && index2 < len2){
        if(first[index1] <= second[index2]){
            arr[mainIndexValue++] = first[index1++];
        }

        else{
            arr[mainIndexValue++] = second[index2++];
            res += (len1 - index1);
        }
    }

    while(index1 < len1){
        arr[mainIndexValue++] = first[index1++];
    }

    while(index2 < len2){
         arr[mainIndexValue++] = second[index2++];
    }

    delete []first;
    delete []second;

    return res;
}


int countInv(vector<int> &arr, int s, int e){

    int res = 0;
    if(s < e){

        int mid = s + (e-s)/2; 

        // left value count karna 
        res += countInv(arr, s, mid);
        // right value count karna
        res += countInv(arr, mid+1, e);

        res += merge(arr, s, e);
    }

    return res;
}

int inversionCount(vector<int> & arr){
    int e = arr.size()-1;

    return countInv(arr, 0, e);

}

int main(){

    vector<int> arr = {4, 3, 2, 1};

    cout<<inversionCount(arr);
    return 0;
}