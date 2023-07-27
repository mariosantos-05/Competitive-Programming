#include<iostream>
using namespace std;

//sabendo a quantidades de vezes que um loop deve funcionar usamos o "for"

int main(){
    /*o for funciona no seguinte formato:
    for (sintaxe 1; sintaxe 2; sintaxe 3)
    sintaxe 1 = executada 1 vez antes de entrar no bloco verdade
    sintaxe 2 = define a condição para o bloco adqurir valor verdade
    sintaxe 3 = executada toda vez que a leitura do bloco finaliza*/
    cout << "For loop: " << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }
    //é possivel por um loop dentro do outro

    //existe o "for each" loop utilizado exclusivamente para "vetores" do seguinte modo:
    cout << "For Each Loop: " << "\n";
    int numero[5] = {10,2,32,47,5};
    for (int i : numero){
        cout << i << "\n";
    }

    return 0;
    

}