#include<iostream>
using namespace std;

int main(){
    int p, q;
    cin >> p >> q;
    if((p+q)%2 == 0){
        cout << 0;
    }
    else{
        cout << 1;
    }
}