#include<iostream>

using namespace std;

int main(){

    // int arr[10] = {23, 122, 41, 67};

    // cout<<"Address of first memory block is: "<<arr<<endl;
    // cout<<"Address of first memory block is: "<<&arr[0]<<endl;
    // cout<<"4th: "<<*arr<<endl;
    // cout<<"5th: "<<*arr+1<<endl;
    // cout<<"6th: "<<*(arr+1)<<endl;
    // cout<<"7th: "<<*(arr)+1<<endl;
    // cout<<"8th: "<<arr[2]<<endl;
    // cout<<"9th: "<<*(arr+2)<<endl;
    // cout<<"10th: "<<2[arr]<<endl;

    // int temp[10];
    // int *p = &temp[0];
    // cout<<"Size of temp: "<<sizeof(temp)<<endl;
    // cout<<"Size of temp: "<<sizeof(*temp)<<endl;
    // cout<<"Size of temp: "<<sizeof(&temp)<<endl;

        
    // cout<<"Size of pointer: "<<sizeof(p)<<endl;
    // cout<<"Size of pointer: "<<sizeof(*p)<<endl;
    // cout<<"Size of pointer: "<<sizeof(&p)<<endl;

    // int a[20] = {1, 2, 3, 4, 5};

    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;

    // int *p = &a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;


    int arr[10];

// ERROR
    // arr = arr+1;

    int *ptr = &arr[0];
    cout<<ptr<<endl;
    ptr = ptr+1;
    cout<<ptr<<endl;

    return 0;
}