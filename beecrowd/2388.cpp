#include<iostream>
using namespace std;

int main(){
    //descobrindo como pegar multiplas entradas delimitada por 1 inteiro incial
    int n, a, i, distancia = 0;
    cin >> n;
    int v[n], t[n];
    for(i = 0; i < n; i++)
    {
        cin >> v[i] >> t[i];
    }
 
    for(i = 0; i < n; i++)
    {
        int posicao = v[i]*t[i];
        distancia += posicao;
    }

    cout << distancia << "\n";
    return 0;
}