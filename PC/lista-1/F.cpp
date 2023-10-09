#include <bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int get_sum(int n){
    int sum = 0;
    while (n > 0){
        sum = sum + (n % 10);
        n = n/10;
    }
    return sum;
}

int main(){
    int n, a, b, sum;

    cin >> n >> a >> b;
    sum = 0;
    for(int i = 1; i <= n; i++){
        if ((get_sum(i) >= a) && (get_sum(i) <= b)){
            sum = sum + i;    
        }
    }
    cout << sum << "\n";

    return 0;
}