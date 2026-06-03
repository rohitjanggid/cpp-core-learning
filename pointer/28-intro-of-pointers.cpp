#include<iostream>

using namespace std;

int main(){

    int num = 5;
    
    // cout<<num<<endl;

    // Address of Opraters - &

    cout<<"Address of num is: "<<&num<<endl;

    int *ptr = &num;

    cout<<"Value of num is: "<<*ptr;

    double d = 4.3;
    double *p2 = &d;

    cout<<endl<<"Address of d is: "<<p2;
    cout<<endl<<"Value of d is: "<<*p2;

    cout<<endl<<"Size of integer is: "<<sizeof(num);
    cout<<endl<<"Size of double is: "<<sizeof(ptr);
}