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
    ll n,r,m,p; 
    double s1, s2;
    cin >> n >> r;
    cin >> m >> p;
    s1 = (1.0*r)/n;
    s2 = m*s1;
    if(s2 > p){
        cout << "Promocao" << "\n";
    }
    else{
        cout << "Enganacao" << "\n";
    }
}


int main(){
    desync;
    solve();
    return 0;
}