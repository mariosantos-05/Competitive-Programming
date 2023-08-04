#include<iostream>
using namespace std;

int main(){
    //acertando o formato da entrada!
    int n,x;
    cin >> n;
    int sequence[n];
    for(int i = 0; i < n; i++)
    {
        cin >> sequence[i];
    }
    
    //fazendo a operação de resolução!

    int contador = 1;
    int ref = sequence[0];
    for(int i = 0; i < n; i++)
    {
        if(ref != sequence[i])
        {
            
            contador += 1;
            ref = sequence[i];
        }

    }
    cout << contador << "\n";


    return 0;
}