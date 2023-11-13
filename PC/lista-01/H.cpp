#include <bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


int main(){
    int n, xc, yc, menor;
    int xi, yi, pi, soma;
    cin >> n >> xc >> yc;
    
    menor = 1000000000;
    int index = 0;
    int i = 1;
    while (n--){
        cin >> xi >> yi >> pi;
        soma = (abs(xc-xi) + abs(yc-yi))*2 + pi;
        if (soma < menor){
            menor = soma;
            index = i;
        }
        i++;
    }
    cout << menor <<" " <<  index << "\n";


    return 0;
}
