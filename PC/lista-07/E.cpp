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

//executar uma busca binaria
bool presentes(vector<int>& v, int key, int moms) {
    int total = 0;
    for (int i = 0; i < v.size(); i++) {
        total += v[i] / key;
    }
    return total >= moms;
}

int findMaxv(vector<int>& v, int moms) {
    int left = 1;
    int right = *max_element(v.begin(), v.end());

    int result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (presentes(v, mid, moms)) {
            result = mid;
            left = mid + 1;
        }
        else right = mid - 1;
        
    }
    return result;
}

int main() {
    desync;
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++) cin >> v[i];
    sort(v.begin(),v.end());
    int result = findMaxv(v, m);
    cout << result << "\n";
    return 0;
}
