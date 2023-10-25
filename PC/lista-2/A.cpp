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


int main(){
    desync;
    string t;
    cin >> t;
    queue<char> q; 
    for(int i = 0; i < t.size(); i++){
        q.push(t[i]);
    }
    bool valor = false;
    int formigas = 0;
    int contador = 0;
    while(!q.empty()){
        int intervalo = 0;
        if (q.front() == 'r'){
            valor = true;
            contador = 0;
        }
        else if(valor && q.front() == '.'){intervalo++; contador++;}
        else if(valor == true && q.front() == 's'){
                intervalo = intervalo - contador ;
                valor = false;       
        }
        q.pop();
        formigas += intervalo;
    }
    cout << formigas << "\n";
    return 0;
}

