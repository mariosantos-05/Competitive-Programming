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

bool div(int n){
    if(n%3 == 0){
        return true;
    }
    return false;
}

void solve(){
    string n;
    cin >> n;
    int ans = 0;
    bool valor = true;
    for(int i = 0; i < n.size(); i++){
        int a = stoi(n,nullptr,i);
        if((div(a)) == false){
            valor = false;
        }   
    }
    if (valor == false) cout << "Nao\n";
    else cout << "Sim\n";
}

int main(){
    desync;
    solve();
    return 0;
}