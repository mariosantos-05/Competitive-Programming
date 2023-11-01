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

/*void solve(){
    ll n, t , c,aux;
    cin >> n >> t >> c;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> aux;
        v.push_back(aux);
    }
    int contador = 0;
    bool valor = false;
    for(int i = 0; i < n; i++){
        if(v[i] < t){
            valor  = true;
        }
        else if(v[i] >= t && valor){
            contador++;
            valor = false;
        }
        else valor = false;
    }
    if(valor == true) contador++;
    cout << contador << "\n";
}*/


int main(){
    int N, T, C;
    cin >> N >> T >> C;
    
    vector<int> gravidades(N);
    for (int i = 0; i < N; i++) {
        cin >> gravidades[i];
    }

    int contagem = 0;
    int contagem_temp = 0;

    for (int i = 0; i < N; i++) {
        if (gravidades[i] <= T) {
            contagem_temp++;
            if (contagem_temp == C) {
                contagem++;
            }
        } else {
            contagem_temp = 0;
        }
    }

    if(contagem != 0) contagem = contagem*2;

    cout << contagem << "\n";

    return 0;
}



