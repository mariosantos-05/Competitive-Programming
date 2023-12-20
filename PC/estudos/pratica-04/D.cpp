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

//Making the define out of the main to use it in others functions without the need to pass
int n, m;
vector<vector<char>> board;
vector<vector<bool>> visited;

bool isValid(int x, int y, char color) {
    return x >= 0 && x < n && y >= 0 && y < m && board[x][y] == color;
}

bool dfs(int x, int y, int px, int py, char color, int depth) {
    if (visited[x][y]) {
        return depth >= 4;
    }
    visited[x][y] = true;

    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};

    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (isValid(nx, ny, color) && !(nx == px && ny == py)) {
            if (dfs(nx, ny, x, y, color, depth + 1)) {
                return true;
            }
        }
    }

    return false;
}

bool hasCycle() {
    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!visited[i][j]) {
                if (dfs(i, j, -1, -1, board[i][j], 1)) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    //utilize dfs
    desync;
    cin >> n >> m;
    board.assign(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
    }
    if (hasCycle()) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
