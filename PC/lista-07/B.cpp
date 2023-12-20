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

//two pointers 
void two_sum(vector<int> v, int s){
    int n = v.size();
    
    int l = 0;
    int r = n-1; 
    int best_diff = INT_MAX;
    int x, y;

    while(l < r){
        int current_sum = v[l] + v[r];
        int current_diff = abs(v[l] - v[r]);

        if(current_sum < s)
            l++;
        else if(current_sum > s)
            r--;
        else {
            if(current_diff < best_diff) {
                best_diff = current_diff;
                x = v[l];
                y = v[r];
            }
            l++;
            r--;
        }
    }
    cout << x << " " << y << "\n";
}

int main(){
    desync;
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    two_sum(v, m);
    return 0;
}
