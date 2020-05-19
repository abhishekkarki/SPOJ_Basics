#include<iostream>
using namespace std;

int main(){
    int no;
    while(1){
        cin >> no;
        if(no == 42){
            cout << no << endl;
            cout.flush();
            break;
        }
        else{
            cout << no << endl;
            cout.flush();
        }

    }
   
}