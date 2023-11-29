#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 1e3 + 5;
int dp[MAX][MAX];


int solve(int esq, int dir){
    if(esq == dir) return 0;
    if(esq + 1 == dir) return s[esq] == s[dir] ? 0 : 1;

    if(dp[esq][dir] != -1) return dp[esq][dir];

    int ans = 1e7;
    ans = min(ans, 1 + min({solve(esq, dir-1), solve(esq+1, dir), solve(esq+1, dir-1)}));
    if(s[esq] == s[dir]) ans = min(ans, solve(esq+1, dir-1));

    return dp[esq][dir] = ans;

}

void task(){
    string s;
    memset(dp, -1, sizeof dp);
    cin >> s;
    printf("%d\n", solve(0, s.size()-1));
}

int main() {
    int t = 1;
    //scanf("%d", &t);
    while(t--){
        task();
    }
    return 0;
}
