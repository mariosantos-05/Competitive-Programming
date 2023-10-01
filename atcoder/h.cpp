#include<bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void solve(){
    int n, m;
    vector<int> fire;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int aux;
        cin >> aux;
        fire.push_back(aux);
    }

    for(int i = 0; i < n; i++){
        for(auto elem: fire){
            if (elem == i){
                cout << 0 << "\n";
            }
            else{
                cout << abs(elem-i) << "\n";
            }

        }
    }

}

int main(){
    solve();
    return 0;
}

