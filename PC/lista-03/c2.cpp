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

int contarPrisioneirosTransferidos(int N, int T, int C, vector<int>& gravidadeCrime) {
    int count = 0;
    int prisioneirosComGravidadeAtual = 0;

    for (int i = 0; i < N; i++) {
        if (gravidadeCrime[i] <= T) {
            prisioneirosComGravidadeAtual++;
            if (prisioneirosComGravidadeAtual == C) {
                count++;
            }
        }

        if (i >= C && gravidadeCrime[i - C] <= T) {
            prisioneirosComGravidadeAtual--;
        }
    }

    return count;
}

int main() {
    desync;
    int N, T, C;
    cin >> N >> T >> C;

    vector<int> gravidadeCrime(N);
    for (int i = 0; i < N; i++) {
        cin >> gravidadeCrime[i];
    }

    int resultado = contarPrisioneirosTransferidos(N, T, C, gravidadeCrime);

    if (resultado == 0){
        cout << resultado << "\n";
    }
    else{
        cout << resultado + 1 << "\n";
    }

    return 0;
}
