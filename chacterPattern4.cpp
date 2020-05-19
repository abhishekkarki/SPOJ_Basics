#include<iostream>
using namespace std;

int main(){
    int lines;
    cin >> lines;
    while(lines>0){
        int row, column, Irow, Icolumn;
        cin >> row >> column >> Irow >> Icolumn;
        row = (row+1) + (Irow*row);
        column = (column+1) + (Icolumn*column);
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(i == 0){
                    cout << "*";
                }else if(i % (1+Irow) == 0){
                    cout << "*";
                }
                else if(j == 0){
                    cout << "*";
                }
                else if(j % (1+Icolumn) == 0){
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