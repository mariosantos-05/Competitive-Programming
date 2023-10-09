#include <bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(NULL): cout.tie(NULL);
using namespace std;

int main(){
    int a,n;
    cin >> n >> a;
    if (a > n){
        cout << "Sim" << "\n";
    } 
    else{
        if (n%500 <= a){
            cout << "Sim" << "\n";
        }
        else{
            cout << "Nao" << "\n";
        }
    }
    return 0;
}