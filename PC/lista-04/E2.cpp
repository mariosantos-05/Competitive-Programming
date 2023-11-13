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
    ll n, q, aux, l, r;
    cin >> n >> q ;
    vector<ll> numbers;
    //a.push_back(0);
    for(int i = 0; i < n; i++){
        cin >> aux;
        numbers.push_back(aux);
    }
    // Sort the vector using the custom comparator
    sort(numbers.begin(), numbers.end(), greater<int>());

    // Step 2: Create a new vector
    vector<int> sortedVector;

    // Step 3: Iterate through the sorted vector and alternate between adding elements to the front and back
    bool addToFront = true;
    for (const auto& element : numbers) {
        if (addToFront) {
            sortedVector.insert(sortedVector.begin(), element);
        } else {
            sortedVector.push_back(element);
        }
        addToFront = !addToFront;
    }

    vector<ll> psum(n+1,0);
    for(int i = 1; i <= n; i++){
        psum[i] = sortedVector[i] + psum[i-1];
    }

    int ans = 0; 
    while(q--){
        cin >> l >> r;
        ans += psum[r] - psum[l-1] ;
    }
    cout << ans << "\n";

}


int main(){
    desync;
    solve();
    return 0;
}