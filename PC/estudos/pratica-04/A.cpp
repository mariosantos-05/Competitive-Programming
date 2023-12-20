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

void calcSubset(vector<char>& A, set<vector<char>>& uniqueSubsets, vector<char>& subset, int index){

    uniqueSubsets.insert(subset);

    for (int i = index; i < A.size(); i++) {
        subset.push_back(A[i]);
        calcSubset(A, uniqueSubsets, subset, i + 1);
        subset.pop_back();
    }
}

vector<vector<char>> subsets(vector<char>& A)
{
    set<vector<char>> uniqueSubsets;
    vector<char> subset;
    int index = 0;
    calcSubset(A, uniqueSubsets, subset, index);
    vector<vector<char>> res(uniqueSubsets.begin(), uniqueSubsets.end());
    return res;
}


int main(){
    desync;
    string t;
	cin >> t;
	vector<char> array;
	for(int i = 0; i < t.size(); i++){
		array.push_back(t[i]);
	}
    vector<vector<char>> res = subsets(array);
    for (int i = 1; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j];
        cout << "\n";
    }

    return 0;
}
