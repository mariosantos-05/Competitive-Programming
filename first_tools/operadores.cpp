#include <iostream>
using namespace std;

int main(){
    // operador soma já foi visto e é simplismente "+", a maioria opera do mesmo modo que no python

    int x, z;

    cout << "escreva respectivamente números para testar as operações: \n";

    cin >> x;
    cin >> z;

    cout << "soma dos números: " << x + z << "\n";
    cout << "diferença dos números: " << x - z << "\n";
    cout << "divisão dos números: " << x/z << "\n";
    cout << "multiplicação " << x * z << "\n";
    cout << "resto: "<< x%z << "\n";

    return 0;
}