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

ll mergeiversions(vector<int>& arr, int left, int middle, int right) {
    ll inversions = 0;

    int n1 = middle - left + 1;
    int n2 = right - middle;

    vector<int> leftArr(n1), rightArr(n2);

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[middle + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
            inversions += (long long)(n1 - i);
        }
    }

    while (i < n1)
        arr[k++] = leftArr[i++];

    while (j < n2)
        arr[k++] = rightArr[j++];

    return inversions;
}

ll mergesort(vector<int>& arr, int left, int right) {
    ll inversions = 0;

    if (left < right) {
        int middle = left + (right - left) / 2;

        inversions += mergesort(arr, left, middle);
        inversions += mergesort(arr, middle + 1, right);
        inversions += mergeiversions(arr, left, middle, right);
    }

    return inversions;
}


ll inversoes(vector<int>& arr) {
    return mergesort(arr, 0, arr.size() - 1);
}

int main() {
    desync;
    int p;
    cin >> p;
    vector<int> v(p);
    for(int i = 0; i < p; i++) cin >> v[i];

    ll inversions = inversoes(v);

    if (inversions % 2 == 1) cout << "Marcelo\n";
    else cout << "Carlos\n"; 
    
    return 0;
}
