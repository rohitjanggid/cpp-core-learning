#include<iostream>

using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int count = 0;

    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    // palce pivot at right positon 
    int pivotIndex = s+count;
    swap(arr[s], arr[pivotIndex]);

    int i = s, j = e;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i] > pivot && arr[j] <= pivot){
            swap(arr[i++], arr[j--]);
        }

        else if(arr[i] <= pivot){
            i++;
        }

        else{
            j--;
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e){

    // base case 
    if(s >= e){
        return ;
    }

    // partition karne pr
    int p = partition(arr, s, e);

    // sort left part
    quickSort(arr, s, p-1);
    
    // sort right part 
    quickSort(arr, p+1, e);
}

int main(){

    int arr[11] = {4, 3, 2, 1, 5, 6, 8, 8, 2, 1, 3};
    int n = 11;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}