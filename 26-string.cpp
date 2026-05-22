#include <iostream>

using namespace std;

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];

    cout<<"Enter your name: ";
    cin>>name;

    // 1. print char
    cout<<"Your name is: "<<name<<endl;

    // 2. print char length
    int n = getLength(name);
    cout<<"Your name length is: "<<n<<endl;

    // 3. reverse the char
    reverse(name, n);
    cout<<"Reverse char is: "<<name;

}