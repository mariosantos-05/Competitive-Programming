#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


void task(){
    int n;
    scanf("%d", &n);
    ll ones = 0, twos = 0, v;
    ll common_bit_mask;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &v);
        twos = twos | (ones & v);
        ones = ones ^ v;
        common_bit_mask = ~(ones & twos);
        ones &= common_bit_mask;
        twos &= common_bit_mask;
    }

    printf("%lld\n", ones);
}

int main() {
    int t = 1;
    //scanf("%d", &t);
    while(t--){
        task();
    }
    return 0;
}
