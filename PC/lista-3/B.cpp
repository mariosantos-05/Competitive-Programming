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
    int n;
    vector<pair<char, char>> v;
    string s1, s2,aux;
    cin >> s1;
    cin >> s2;

    for(int i = 0; i < 26; i++){
        v.push_back(make_pair(s1[i],s2[i]));
    }
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> aux;
        for(int j = 0; j < aux.size(); j++){
            if(isdigit(aux[j])) cout << aux[j];
            for(int z = 0; z < 26; z++){
                char aux2 = aux[j];
                if(tolower(aux[j]) == v[z].first){ 
                    if(isupper(aux2)) cout << (char) toupper(v[z].second) << "";
                    else cout << v[z].second << "";
                }
                
            }
        }
        cout << " \n";
    }
}


int main(){
    desync;
    solve();
    return 0;
}