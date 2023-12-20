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
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> ans(n);

        // Sort the array in descending order
        sort(a.rbegin(), a.rend());

        for (int i = 0; i < n; ++i) {
            int score = a[i];
            int additionalElements = 0;

            // Check how many additional elements can be removed
            for (int j = i + 1; j < n; ++j) {
                if (score >= a[j]) {
                    score += a[j];
                    additionalElements++;
                } else {
                    break;
                }
            }

            ans[i] = additionalElements;
        }

        // Output the result for the current test case
        for (int i = 0; i < n; ++i) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}