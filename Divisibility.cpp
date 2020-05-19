#include<iostream>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    while(cases>0){
        int n, x, y;
        cin >> n >> x >> y;
        for(int i=1; i<n; i++){
            if(((i%x)==0) && ((i%y)!=0)){
                cout << i << " ";
            }
            else{
                cout <<"";
            }
        }
        cases--;
    }
}