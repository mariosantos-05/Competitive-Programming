#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

unordered_set<ll> divisores;

void task(){
    ll vet[10];
    ll maior = 0;
    for(int i=0;i<5;i++){
        scanf("%lld", vet+i);
        for(ll d = 1; d * d <= vet[i];d++){
            if(vet[i] % d == 0){
                divisores.insert(d);
                divisores.insert(vet[i]/d);
            }
        }
    }

    for(auto v : divisores){
        int qtd = 0;
        ll x, y;
        for(int i=0;i<5;i++){
            if(vet[i] % v != 0){
                qtd++;
                x = vet[i], y = v;
            }
        }
        if(qtd == 1){
            printf("%lld %lld\n", x, y);
            return;
        }
    }
}

int main() {
    int t = 1;
    //scanf("%d", &t);
    while(t--){
        task();
    }
    return 0;
}
