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

//uma busca binaria que busca sempre a primeira ocorrencia da chave
int busca_bin(vector<int>& v, int key) {
    int left = 0;
    int right = v.size() - 1;
    int result = -2; 

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (v[mid] == key) {
            result = mid; 
            right = mid - 1; 
        } else if (v[mid] < key) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    //ans.push(result+1);
    return result+1; 
}

int main(){
    desync;
    int n, m, q,pos;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i<v.size(); i++) cin >> v[i];
    //m queries
    sort(v.begin(),v.end());
    while(m--){
        cin >> q;
        cout << busca_bin(v,q) << " ";   
    }
    cout << "\n";
    //for(auto& elem: ans)cout << elem << " ";
    //cout << "\n";
    return 0;
}