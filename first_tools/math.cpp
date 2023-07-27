#include <iostream>
using namespace std;

//funções matematicas

//obviamente existe uma bibilioteca para operações matematicas:

#include <cmath>
/*utilizada para fazer operações de mais alto nivel como achar raizes, arredondar números 
achar logaritmo e por ai vai*/

int main (){
    //pegando o maior número entre os 2 valores:
    cout <<"O maior valor entre 10 e 5 eh: "<< max(10,5) << "\n";

    //pegando o menor número entre os 2 valores:

    cout <<"O menor valor entre 10 e 5 eh: "<< min(10,5) << "\n";

    cout <<"A raiz quadrada de 32 eh: " << sqrt(32) << "\n";

    cout <<"arredondando 1,47: " << round(1.47) << "\n"; 

    cout <<"o logartimo de 427 eh: " << log(427) << "\n";
}
