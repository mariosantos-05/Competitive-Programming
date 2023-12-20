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

using namespace std;

int main() {
    desync;
    int n, t;
    cin >> n >> t;
    
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> a[i];
    }

    int atual = 1;
    while (atual < t) {
        atual += a[atual - 1];
    }

    if (atual == t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}
