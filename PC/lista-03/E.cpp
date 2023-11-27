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


void solve(){
    //type declaration
    ll n, k1, k2, ans;
    cin >> n >> k1 >> k2;
    vector<int> A(n);
    vector<int> B(n);

    //getting the inputs
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    
    if( *max_element(A.begin(),A.end()) > *max_element(B.begin(),B.end())){
        int maior_pos = max_element(A.begin(),A.end()) - A.begin();
        int menor_pos = min_element(B.begin(), B.end()) - B.begin();
        A[maior_pos] -= k1;
        B[menor_pos] += k2;
    }
    else{
        int maior_pos = max_element(B.begin(),B.end()) - B.begin();
        int menor_pos = min_element(A.begin(), A.end()) - A.begin();
        A[menor_pos] += k1;
        B[maior_pos] -= k2;
    }
    ans = 0;
    for(int i = 0; i < n; i++){
        ans += (abs(A[i] - B[i]))*(abs(A[i] - B[i]));
    }
    cout << ans;
    cout << "\n";
}

int main() {
    desync; 
    solve();
    return 0;
}


