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

pair<long long, long long> findMaxXORPair(long long n) {
    // Find the position of the most significant bit in n
    int msbPosition = 0;
    long long temp = n;
    while (temp > 0) {
        msbPosition++;
        temp /= 2;
    }
    // Set a and b to have different bits at the most significant position
    long long a = (1LL << msbPosition) - 1;
    long long b = n ^ a;

    return make_pair(n, b);
}

int main(){
    desync;
    // User input
    long long n;
    cin >> n;

    // Find and output the result
    pair<long long, long long> result = findMaxXORPair(n);
    cout << result.first << " " << result.second << endl;

    return 0;
}