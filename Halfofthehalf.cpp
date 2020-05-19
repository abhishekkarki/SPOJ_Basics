#include<iostream>
#include<string>
using namespace std;

int main(){
    int cases;
    std::cin >> cases;

    for(int i=0; i<=cases; i++){
        string item;
        cin >> item;
        int box=(item.length())/2;
        for(int j=0; j<=box; j=j+2){
            cout << item.at(j);
        }

    }
}