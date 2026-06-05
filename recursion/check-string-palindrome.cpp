#include<iostream>
#include<string>

using namespace std;

bool checkPalindrome(string str, int s, int e){

    // base case
    if(s > e){
        return true;
    }

    if(str[s] != str[e]){
        return false;
    }
    else{
        return checkPalindrome(str, s+1, e-1);
    }
}

int main(){

    string str = "naman";

    cout<<checkPalindrome(str, 0, str.length()-1);
}