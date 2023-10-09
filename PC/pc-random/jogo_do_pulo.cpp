#include<bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

//resolução por meio do gcd
int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
int main(){
    int g,n,x,y,a = 2;
    cin >> n;

    while(__gcd(a, n) > 1){
        a++;
    }

    //se passar os números para um vector é possivel utilizar o gcd nos elementos!
    g = gcd(a,n,x,y);

    x = (x%n + n)%n;
    cout << x << "\n";

    return 0;
}




