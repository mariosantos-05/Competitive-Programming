#include <iostream>
using namespace std;

//arrays

int main(){
    string comida[3] = {"arroz","feijão","batata"};

    //para acessar um elemento da Array é só usar o indice 

    cout << comida[0] << "\n";

    cout << "loop em comida: " << "\n";
    for (int i = 0; i < 3; i++){
        cout << comida[i] << "\n"; 
    }

    //Não é explicitamente necessario determinar o tanto de elementos da Array

    string times[] = {"Atheltico","palmeiras","Flamengo"};

    //o metodo para descobrir o tamanho da Array é usar "sizeof(Array);"
    //Entretanto o size é devolvido em bytes 

    cout << "tamanho em bytes da array: " << sizeof(times) << "\n";

    //para encontrar o tanto de elementos na array é necessario dividir o tamanho pelo tamanho do byte:


    int tam_array =  sizeof(times) / sizeof(string);

    cout <<"quantidade de elementos na array: " << tam_array << "\n";

    /*Array com Multi dimensões = Arrays de Arrays = Matriz*/

    string letras[2][4] = {
        {"a","b","c","d"},
        {"A","B","C","D"}
    };
    //é possivel adcionar dimensões infinitamente as Arrays, apenas modificando os colchetes
    
    //para acessar os elementos nas arrays é só usar o ordenamento de indices
    cout <<"o elemento na posição A11 da matriz é: " <<  letras[0][0] << "\n";

    return 0; 

}