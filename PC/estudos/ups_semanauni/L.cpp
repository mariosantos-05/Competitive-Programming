#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<pair<int, ll> > > grafo;

const int MAX = 2e5 + 10, MAX_LOG = 18;
int dp[MAX][MAX_LOG], nivel[MAX];

ll dist[MAX];

void dfs(int u, int parent, int level, ll w){
    dist[u] = w;
    dp[u][0] = parent;
    nivel[u] = level;
    for(int i=1;i<MAX_LOG;i++){
        dp[u][i] = dp[dp[u][i-1]][i-1];
    }
    for(int i=0;i<grafo[u].size();i++){
        int v = grafo[u][i].first;
        ll custo = grafo[u][i].second;
        if(v == parent) continue;
        dfs(v, u, level + 1, w + custo);
    }
}

int lca(int x, int y){
    if(nivel[x] < nivel[y]) swap(x, y);

    int dif = abs(nivel[y] - nivel[x]);

    for(int i=MAX_LOG-1;i>=0;i--){
        if(dif >> i & 1){
            x = dp[x][i];
        }
    }

    if(x == y) return x;

    for(int i=MAX_LOG-1;i>=0;i--){
        if(dp[x][i] != dp[y][i]){
            x = dp[x][i], y = dp[y][i];
        }
    }

    return dp[x][0];
}

void task(){
    int n, q;
    scanf("%d%d", &n, &q);
    grafo.assign(n+5, vector<pair<int, ll> > ());
    for(int i=1;i<n;i++){
        int a, b;
        ll c;
        scanf("%d%d%lld",&a,&b,&c);
        grafo[a].push_back({b, c});
        grafo[b].push_back({a, c});
    }

    dfs(1, 1, 0, 0);

    while(q--){
        int a, b;
        scanf("%d%d",&a,&b);
        //cerr << "LCA " << lca(a, b) << "\n";
        ll resp = dist[a] + dist[b] - (2 * dist[lca(a,b)]);
        printf("%lld\n", resp);
    }

}

int main() {
    int t = 1;
    //scanf("%d", &t);
    while(t--){
        task();
    }
    return 0;
}
