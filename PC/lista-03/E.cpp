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


int main() {
    desync; 
    int N, k1, k2;
    cin >> N >> k1 >> k2;

    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    long long initial_error = 0;
    for (int i = 0; i < N; i++) {
        initial_error += (A[i] - B[i]) * (A[i] - B[i]);
    }

    vector<vector<vector<long long>>> dp(N + 1, vector<vector<long long>>(k1 + 1, vector<long long>(k2 + 1, 0)));

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= k1; j++) {
            for (int l = 0; l <= k2; l++) {
                dp[i][j][l] = dp[i - 1][j][l];
                if (j > 0) {
                    dp[i][j][l] = max(dp[i][j][l], dp[i - 1][j - 1][l] + (A[i - 1] - B[i - 1]) * (A[i - 1] - B[i - 1]));
                }
                if (l > 0) {
                    dp[i][j][l] = max(dp[i][j][l], dp[i - 1][j][l - 1] + (A[i - 1] - B[i - 1]) * (A[i - 1] - B[i - 1]));
                }
            }
        }
    }

    cout << initial_error - dp[N][k1][k2] << endl;

    return 0;
}
