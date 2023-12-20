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
    string s;
    cin >> s;
    int ans = 0;

    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'V' && s[i + 1] == 'K') {
            ans++;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        string mstr = s;
        if (s[i] == 'V') {
            mstr[i] = 'K';
        } else {
            mstr[i] = 'V';
        }
        int modifiedans = 0;
        for (int j = 0; j < mstr.length() - 1; j++) {
            if (mstr[j] == 'V' && mstr[j + 1] == 'K') {
                modifiedans++;
            }
        }
        ans = max(ans, modifiedans);
    }

    cout << ans << "\n";

    return 0;
}
