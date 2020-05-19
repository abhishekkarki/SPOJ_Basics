#include<iostream>
using namespace std;

int main(){
    int lines;
    cin >> lines;
    while(lines>0){
        int rows, columns;
        cin >> rows >> columns;
        rows=((rows-1)*3)+4;
        columns=((columns-1)*3)+4;
        for(int i=0; i<rows; i++){
            for(int j=0; j<columns; j++){
                if(i==0){
                    cout << "*";
                }
                else if((i%3)==0){
                    cout << "*";
                }
                else if(j==0){
                    cout << "*";
                }
                else if((j%3)==0){
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