#include<iostream>
using namespace std;

int main(){
    //adcionando um ponteiro 
    string alimento = "pizza";
    string* pointer = &alimento;

    cout << pointer << "\n";


    //dereference
    string comida = "arroz";
    string* ptr = &comida;

    cout << ptr << "\n";
    cout << *ptr << "\n";

    //modificando o valor de um ponteiro :
    string carro = "Fiat";
    string* p = &carro;

    cout << "valor inicial: " << *p << "\n";


    *p = "Corola";

    cout << "Mudanca de valor para: " << *p << "\n";
    return 0;
}