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
    string num_sub = "", num_str;
    cin >> num_str;
    int contador = 0;
    int num = stoi(num_str);

    while(num > 0){
        int sub;
        string sub_str = "";
        for(char c: num_str){
            int c_n = c - '0';
            sub_str += (c_n == 0)? '0' : '1';
        }
        sub = stoi(sub_str);
        num -= sub;
        num_sub += sub_str + " ";
        contador++;
        num_str = to_string(num);
    }
    cout << contador << "\n" << num_sub << "\n";
}

int main(){
    desync;
    solve();
    return 0;
}