#include <bits/stdc++.h>
using namespace std;
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define pb push_back
template <class T>
void print_v(vector<T> &v) { for(auto x : v) cout << x << " "; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }


int main(){
    desync;
    int n, q, aux, tipo, maior;

    stack<pii> pilha;
    cin >> n >> q;

    //pilha de maximos;
    cin >> aux;
    pilha.push(make_pair(aux,aux));

    for(int i = 1; i < n ; i++){
        cin >> aux;
        pilha.push(make_pair(aux, max(aux,pilha.top().second)));
    }

    while(q--){
        cin >> tipo;
        if (tipo == 1){
            cout << pilha.top().second << "\n";
        }
        else{
            if (tipo == 2){
                cin >> aux;
                pilha.push(make_pair(aux, max(aux, pilha.top().second)));
            }
            else{
                pilha.pop();
            }
        }
    }

    return 0;
}