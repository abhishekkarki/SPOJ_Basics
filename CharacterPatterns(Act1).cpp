#include<iostream>
using namespace std;

int main(){
    int lines, rows, columns;
    cin >> lines;
    while(lines>0){
        cin >> rows >> columns;
        for(int i=0; i<rows; i++){
            for(int j=0; j<columns; j++){   
                if ((i+j)%2 == 0){
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