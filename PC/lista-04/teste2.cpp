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
    ll n, q , s, ans, l , r;
    cin >> n >> q;
    vector<ll> v(n+1,0);
    vector<ll> delta(n+2,0);
    vector<ll> nums(n);
    vector<ll> aux(n,0);
    vector<pii> save;
    for(int i =  0; i < n; i++){
        cin >> nums[i];
    }
    //realizando as Q consultas
    while(q--){
        cin >> l >> r;
        delta[l] += 1;
        delta[r+1] -= 1;
        save.push_back({l,r});
    }

    vector<ll> psum(n+1,0);//inicializado com tudo zerado
    s = 0;
    for(int i = 1; i <= n; i++){
        s = s + delta[i];
        psum[i] = v[i] + s;
    }


    while(!nums.empty()){
        ll maior_pos = max_element(psum.begin(), psum.end()) - psum.begin(); //getting the position of the biggest number of the psum  
        ll maior = *max_element(nums.begin(), nums.end());
        aux.insert(aux.begin() + maior_pos, maior);
        nums.erase(nums.begin()+ maior_pos);
    }

    //aplicando mudanças para o vetor inicial.
    /*s = 0;
    for(int i = 1; i <= n; i++){
        s = s + delta[i];
        psum[i] = v[i] + s;
    }*/
    for(auto& elem : psum) cout << elem << " ";
    cout << "\n";
}

int main(){
    desync;
    solve();
    return 0;
}