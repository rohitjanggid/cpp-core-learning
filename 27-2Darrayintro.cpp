#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int n, int m){
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

// col wise sum
void isColSum(int arr[][4] , int n, int m){
    cout<<"Printing col Sum ->"<<endl;
    for(int j=0; j<m; j++){
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i][j];
        }
        cout<<j<<" col sum: "<<sum<<endl;
    }
}
// row wise sum
void isRowSum(int arr[][4] , int n, int m){
    cout<<"Printing Row Sum ->"<<endl;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += arr[i][j];
        }
        cout<<i<<" row sum: "<<sum<<endl;
    }
}

// largest row sum
int largestSumRow(int arr[][4], int n, int m){
    int ans = -1;
    int maxi = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += arr[i][j];
        }
        if(maxi < sum){
            maxi = sum;
            ans = i;
        }
    }
    return ans;
}

int main(){
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};
    int arr[3][4];

    cout<<"Enter the Elements: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the Array :"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to search: ";
    int target;
    cin>>target;

    if(isPresent(arr, target, 3, 4)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
    cout<<endl;

    isColSum(arr, 3, 4);
    isRowSum(arr, 3, 4);

    cout<<"largest sum of row is: "<<largestSumRow(arr, 3, 4);
    return 0;
}