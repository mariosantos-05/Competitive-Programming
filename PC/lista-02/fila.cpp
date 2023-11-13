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
    int n, q , aux, maior;

    cin >> n;
    queue<int> fila(n);

    for(int i = 0; i < n; i++){
        //cin >> fila(n);
        cin >> aux;
        fila.push(aux);
    }
    cout << "Elementos:" << int fila.size() << "\n"

    while(!fila.empty()){
        int elem = fila.front();
        fila.pop(); //o(1)
        cout << elem << "\n"; 
    }

    return 0;
}