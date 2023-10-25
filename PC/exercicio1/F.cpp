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
template <class T>
void print_v(vector<T> &v) { for(auto x : v) cout << x << " "; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }


int main(){
    desync;
    int a, part;
    bool verdade = true;
    cin >> a;
    part = a;
    while(part > 0){
        if(part%10 == 1){
            part /= 10;
        }
        else if(part%100 == 14){
            part /= 100;
        }
        else if(part%1000 == 144){
            part /= 1000;
        }
        else{
            verdade = false;
            break;
        }
    }
    if(verdade) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

