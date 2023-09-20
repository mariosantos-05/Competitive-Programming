#include<iostream>
using namespace std;

/*existem 4 tipos de condicionais possiveis em C++*/

int main(){
    //primeiro o classico e funcional "if":
    if (10 > 2){
        cout << "verdade, 10 é maior que 2!" << "\n";
    }

    if (2 > 10){
        cout << "kinda sus" << "\n";
    }
    //utilizando "else":
    else{
        cout << "De fato 2 não é maior que 10!" << "\n";
    }

    //utilizando o "else if":
    if (2>10){
        cout << "inverdade" << "\n";
    }
    else if (10>2){
        cout << "verdade" << "\n";
    }
    else{
        cout << "só sei que nada sei" << "\n";
    }

    /*Uma simplificação de "if else" é possivel escrever varias linhas em uma unica
    no formato "variable = (condition) ? expressionTrue : expressionFalse;" 
    isso é conhecido como "Ternary operator"*/

    string resultado = (10<5) ? "Verdade 10 eh menor que 5" : "falso, 10 eh maior que 5."; 

    cout << resultado << "\n";

    //por fim temos o switch:

    int nota = 2;
    switch (nota)
    {
    case 2:
        cout << "MI" << "\n";
        break;
    case 5:
        cout <<"Melhor média" << "\n";   
        break;
    }


}