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

ll f(ll x, ll r, ll d) {
    ll ans=0;
    if(x<0) return 0LL;
    if(x%d<=r) {
        ans+=x%d+1;
        x-=x%d;
    }
    else x=x-x%d+d;
    x/=d;
    ans+=x*(r+1);
    return ans;
}


void solve(){
    ll a,b,r,n,ans = 0;
    cin >> a >> b >> r >> n;
    cout << f(b,r,n) - f(a-1,r,n) << "\n";
}

int main(){
    desync;
    solve();
    return 0;
}