#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int matriz[n][m];
    for(int i= 0; i<n; i++){
        for (int j = 0; j < m; j++){
            cin >> matriz[i][j]; 
        }
    }
}