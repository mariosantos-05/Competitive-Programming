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


//I need to study more MSB

void solve(){
    ll n, ans = 0;
    cin >> n;
    while(n != 0){
        ans++;
        n = n/2;
    }
    cout << ((1<<(ans-1))) -1  << "\n";
}

int main() {
    desync;
    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}