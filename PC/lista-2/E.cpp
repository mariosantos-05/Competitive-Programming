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
ll lcm(ll a,ll b) { return a/gcd(a,b)*b;}


int main() {
    desync;
    int n;
    cin >> n;
    //recebendo a entrada!
    vector<array<int, 3>> clientes(n);
    for(int i = 0; i < n; i++) {
    cin >> clientes[i][0] >> clientes[i][1] >> clientes[i][2];
    }

    
    //precioso revisar como funcionam os paramentros para uma priority_queue
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for(int i = 0; i < n; i++) {
        pq.emplace(0, i);
    }
    int ans = 0;
    while(!pq.empty()) {
        while(pq.top().first + clientes[pq.top().second][1] < ans) {
        auto [a, b] = pq.top();
        pq.pop();
        long long calc = a + (ans - a + clientes[b][2] - 1) / (clientes[b][1] + clientes[b][2]) * (clientes[b][1] + clientes[b][2]);
        pq.emplace(calc, b);
    }
                                                //utilizar operador ternario para determinar o incremento
        ans += clientes[pq.top().second][0] + (pq.top().first > ans ? pq.top().first - ans : 0);

        pq.pop();
    }
    cout << ans << '\n';
    return 0;
} 


/*

5
3 1 2
2 3 5
5 2 4
1 1 2
14 4 3

26


*/