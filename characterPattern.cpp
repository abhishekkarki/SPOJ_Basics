#include<iostream>
using namespace std;

int main(){
    int lines;
    cin >> lines;
    while(lines>0){
        int row, column;
        cin >> row >> column;
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(i==0){
                    cout << "*";
                }
                else if(i==(row-1)){
                    cout << "*";
                }
                else if(j==0){
                    cout << "*";
                }
                else if(j==(column-1)){
                    cout << "*";
                }
                else{
                    cout << ".";
                }
            }
            cout << endl;
        }
        lines--;
        cout << endl;
    }
}