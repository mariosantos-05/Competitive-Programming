#include <iostream>
using namespace std;

int fatorial(int n){
    int fact = 1, i;
    for(i=1; i<=n; i++)
    fact = fact * i;
    return 0;
}

int main(){
    int n;
    cin >> n;
    cout << fatorial(n) << "\n";
    return 0;
}
