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

void solve(){
    int i,n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v;
    for(i = 0; i < 2*n+1; i+=2){
        v.pb(s[i]);
    }
    for(int i = 0; i < n; i++){
        cout << v[i];
    }
    cout << "\n";
}

int main(){
    desync;
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}