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
    ll n, q, aux, l, r;
    cin >> n >> q ;
    vector<ll> a;
    a.push_back(0);
    for(int i = 0; i < n; i++){
        cin >> aux;
        a.push_back(aux);
    }
    ll maior = *max_element(a.begin(),a.end());
    //ll pos = distance(a.begin(),max_element(a.begin(),a.end()));
    ll pos2  = max_element(a.begin(),a.end()) - a.begin();
    a.erase(a.begin()+pos2);
    a.insert(a.begin()+((a.size())/2),maior);

    
    
    /*vector<ll> psum(n+1,0);
    for(int i = 1; i <= n; i++){
        psum[i] = a[i] + psum[i-1];
    }

    int ans = 0; 
    while(q--){
        cin >> l >> r;
        ans += psum[r] - psum[l-1] ;
    }
    cout << ans << "\n";/*

}


int main(){
    desync;
    solve();
    return 0;
}