#include <iostream>
#define nosync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    long long n,g,f,c,soma;
    cin >> n >> g >> f >> c;
    soma = c + min(g,f);
    if (soma < n)
        cout << soma << "\n";
    else
        cout << n << "\n";
    return 0;
}