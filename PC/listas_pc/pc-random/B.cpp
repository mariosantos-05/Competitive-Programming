#include<bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long ll;


void solve(){
    int n,q,i,aux,ans;
    ll mi;
    vector<int> xi;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> aux;
        xi.push_back(aux);
    }

    sort(xi.begin(), xi.end());
    cin >> q;
    while(q--){
        cin >> mi;
        ans = upper_bound(xi.begin(),xi.end(), mi) - xi.begin(); //aritmetica de iterators para achar o indice e não o iterator
        cout << ans << "\n";
    }

}

int main(){
    solve();
    return 0;
    
}