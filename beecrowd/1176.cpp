#include<bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long ll;

void fib(int num) {
    ll x = 0, y = 1, z = 0, last;
    for (int i = 0; i < num; i++) {
        last = x;
        z = x + y;
        x = y;
        y = z;
    }
    cout << "fib("<< num << ") " << "= " << x << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        fib(num);
    }
    return 0;
}

