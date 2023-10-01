#include <bits/stdc++.h>
using namespace std;
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
    int a, b, c, i, soma;
    cin >> a >> b >> c;
    soma = 0;
    
    for(i = 1; i <= 6; i++){
        if (i != a && i != b && i != c)
            soma = soma + i;
    }
    cout << soma << "\n";
}

int main() {
    int n;
    cin >> n;
    while(n--)
        solve();
    return 0;
}