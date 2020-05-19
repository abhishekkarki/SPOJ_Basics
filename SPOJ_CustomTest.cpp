// program for finding factorial using recursion

#include<iostream>
using namespace std;

//fact function
int fact(int n){
    if(n<=1){
        return 1;
    }
    else{
        n=n*fact(n-1);
    }
    return n;
}

int main(){
    cout <<  "The factorial of 5 is:" << fact(5);
}