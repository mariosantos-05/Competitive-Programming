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


void solve(){
    int n,q,aux,l,r,x;
    ll s;
    vector<int> v;
    cin >> n >> q;
    v.push_back(0); 
    for(int i = 0; i < n; i++){
        cin >> aux;
        v.push_back(aux);
    }
    vector<ll> delta(n+2,0);
    vector<ll> delta2(n+2,0);
    while(q--){
        cin >> l >> r >> x;
        delta[l]+= -x;
        delta[r+1]-= -x;
        delta2[l] ++;
        delta2[r+1] --;
    }
    vector<ll> psum(n+1,0);
    s = 0;
    for(int i = 1; i <= n; i++){
        s = s + delta[i];
        psum[i] = s;
    }
    s = 0;
    for(int i = 1; i <= n; i++){
        s = s + delta[i];
        psum[i] = v[i] + s;
    }

    vector<ll> psum2(n+1,0);
    s = 0;
    for(int i = 1; i <= n; i++){
        s = s + delta2[i];
        psum2[i] = s;
    }

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        if(psum[i] > 0 && psum2[i] != 0) ans += psum2[i];
    }
    cout << ans <<"\n";


}


int main(){
    desync;
    solve();
    return 0;
}
