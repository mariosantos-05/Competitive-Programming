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
#define eb emplace_back
template <class T>
void print_v(vector<T> &v) { for(auto x : v) cout << x << " "; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b;}


//muito similar a questão da karen e o cafe de qualidade;   
void solve(){
    //psum basico
    ll n, q, t ,x, l, r, s,ans = 0;
    cin >> n >> q >> t;
    vector<ll> v(n+1,0);
    vector<ll> delta(n+2,0);
    //realizando as Q consultas
    while(q--){
        cin >> l >> r >> x;
        delta[l] += x;
        delta[r+1] -= x;
    }
    vector<ll> psum(n+1,0);//inicializado com tudo zerado
    s = 0;
    for(int i = 1; i <= n; i++){
        s = s + delta[i];
        psum[i] = v[i] + s;
    }
    //aplicando mudanças para o vetor inicial.
    s = 0;
    for(int i = 1; i <= n; i++){
        s = s + delta[i];
        psum[i] = v[i] + s;
        if (psum[i] >= t) ans++;
    }
    cout << ans << "\n";
}


int main(){
    desync;
    solve();
    return 0;
}