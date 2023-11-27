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
    int n, ans = 0;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    //if all the candidats have the same amount of votes
    if(count(v.begin(),v.end(),v[0]) == v.size()) cout << "1\n";
    //if Jonas is alredy the one with the majority of votes
    else if (v[0] == *max_element(v.begin(),v.end())) cout << "0\n";
    else{
        //v[0] will aways be Jonas amount of votes
        bool ganhou = false;
        while(ganhou == false){
            if (v[0] == *max_element(v.begin(),v.end()) && (count(v.begin(),v.end(),v[0]) == 1)){
                ganhou = true;
                break;
            }
            else if(count(v.begin(),v.end(),v[0]) > 1 ){
                ans++;
                break;
            }
            else{
                int pos_m = max_element(v.begin(),v.end()) - v.begin();
                v[0]++;
                ans++;
                v[pos_m]--;
            }
        }
        cout << ans << "\n";
    }

}


int main(){
    desync;
    solve();
    return 0;
}