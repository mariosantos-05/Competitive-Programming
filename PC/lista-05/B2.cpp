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



pair<int, int> findMaxXORPair(long long n) {
    // Find the position of the most significant bit that is different
    int msbPosition = 0;
    while (n) {
        msbPosition++;
        n = n >> 1;
    }

    // Build the number 'a' with all bits up to the MSB (inclusive) set
    int a = (1 << msbPosition) - 1;

    // Build the number 'b' by flipping all bits in 'a'
    int b = a ^ n;

    return make_pair(a, b);
}

int main() {
    desync;
    // Input
    long long n;
    cin >> n;

    // Output
    pair<int, int> result = findMaxXORPair(n);
    cout << result.first << " " << result.second << endl;

    return 0;
}