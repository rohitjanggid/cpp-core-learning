#include<iostream>

using namespace std; 

int main(){
    // pointer to int is created, and pointing to some garbage address
    // int *ptr ;

    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;

    // int i=5;
    // // int *p = &1;

    // int *p = 0;
    // p = &i;

    // cout<<p<<endl;
    // cout<<*p<<endl;

    // int num = 5;
    // int a = num;
    // a++;


    // int *p = &num;
    // cout<<"Before: "<<num<<endl;
    // (*p)++;
    // cout<<"After: "<<num<<endl;

    // // coping a pointer
    // int *q = p;
    // cout<<p<<" - "<<q<<endl;
    // cout<<*p<<" - "<<*q<<endl;


    // important concept
    int i = 3;
    int *t = &i;
    *t = *t + 1;
    cout<<*t<<endl;

    cout<<"Before t: "<<t<<endl;
    t = t+1;
    cout<<"After t: "<<t<<endl;
    return 0;
}