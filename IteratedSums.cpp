#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int result=0;
    for(int i=a; i<=b; i++){
        result = result + (i*i);
    }
    cout << result;
}