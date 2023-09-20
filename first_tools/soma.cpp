//tentando somar 2 inteiros 

/*primeiro é necessario entender os tipo de entradas disponiveis, para esse codigo em especifico vou usar "int"*/
#include <iostream>

int main() {
    //aprendendo a adicionar valor a uma variavel 
    int valor_1 = 10;
    std::cout << "O valor da variavel eh: ";
    std::cout << valor_1;

    int valor_2 = 52;
    std::cout << "\nO segundo valor da variavel eh: ";
    std::cout << valor_2;

    std::cout << "\nA soma dos valores eh: ";

    std::cout << valor_1 + valor_2;

    std::cout << "\n";


    //um metodo mais eficiente para declarar variaveis do mesmo tipo é usar uma lista com virgulas com no exemplo a seguir:

    int z = 50, x = 23, y = 0;

    int h = z + x + y;

    std::cout << "metodo_2: ";
    std::cout << h;
    std::cout << "\n";

    //soma de inteiro com double

    double a = 3.27;

    int b = 48;
    //adcionando variaveis no meio de outputs/strings

    std::cout << "a soma de um numero fracionario: " << a <<" com um número inteiro: " << b << " resulta em um número fracionario: " << a+b << "\n";  


    //existe a possiblidade de trabalhar com constantes, que são simplismente declaradas como "const (declaraçao da variavel)"
    return 0;
}