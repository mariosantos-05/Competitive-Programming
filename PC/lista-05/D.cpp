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

vector<int> menor_custo_construcao(int n) {
    // Encontrar o bit mais significativo em n
    int bit_mais_significativo = 1;
    while (bit_mais_significativo <= n) {
        bit_mais_significativo <<= 1;
    }

    bit_mais_significativo >>= 1;

    // Construir a sequência de alturas de pilares
    vector<int> alturas;
    for (int i = 0; i < n; ++i) {
        alturas.push_back(i ^ bit_mais_significativo);
    }

    return alturas;
}

int main() {
    desync;
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        vector<int> alturas = menor_custo_construcao(n);

        for (int altura : alturas) {
            cout << altura << " ";
        }
        cout << endl;
    }

    return 0;
}
