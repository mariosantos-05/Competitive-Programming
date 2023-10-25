#include<bits/stdc++.h>
using namespace std;
//#define desync ios::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
typedef long long ll;


//estou definindo essa macro errado o tempo todo!!!!!!


//estudar mais sobre operadores bitwise!
void task(){
    ios::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    int n;
    cin >> n;
    ll ones = 0, twos = 0, v;
    ll common_bit_mask;

    for (int i = 0; i < n; i++) {
        cin >> v;
        twos = twos | (ones & v);
        ones = ones ^ v;
        common_bit_mask = ~(ones & twos);
        ones &= common_bit_mask;
        twos &= common_bit_mask;
    }
    cout << ones << "\n";
}

int main() {
    int t = 1;
    while(t--){
        task();
    }
    return 0;
}

