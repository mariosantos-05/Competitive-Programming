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
    int n, aux, pos;
    //tentar refazer utilizando pair ou map;
    vector<int> v1;
    vector<int> v2;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> aux;
        v1.push_back(aux);
        v2.push_back(aux);
    }
    sort(v2.begin(), v2.end());
    for (int i = 0; i < n; i++) {
        pos = lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin();
        cout << pos+1 << ' ';
    }
    cout << "\n";
}


int main(){
    desync;
    solve();
    return 0;
}



