#include <iostream>
using namespace std;

int main(){
    int n, m, temp_size=0;
    int seq1[100], seq2[100], temp[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> seq1[i];
    }
    cin >> m;
    for(int j=0; j<m; j++){
        cin >> seq2[j];
    }
    int first=0;
    for(int k=0; k<n; k++){
        int a=0;
        for(int t=0; t<m; t++){
            if(seq1[k] == seq2[t]){
                a = 1;
                break;
            }
        }
        if(a == 0){
            temp[first] = seq1[k];
            temp_size++;
            first++;
        }
    }
    for (int z=0; z<temp_size; z++){
        cout << temp[z] << " ";
    }
    
    
}