#include <iostream>
using namespace std;

int main(){
    string alimento = "torta de cereja";
    string &comida = alimento;

    cout << alimento << comida << "\n";

    //Endereço de memoria. utilizar o & é um dos metodos para acessar o endereço especifico da varaiavel
    cout << &alimento << "\n";
    return 0;
}