#include <iostream>
using namespace std;

struct garrafas
{
    string material;
    int litros; 
    double preco;
};


int main(){
    /*uma struct é o meteodo para agrupar variaves de diferentes tipos. como no exemplo abaixo:*/
    struct {
        int numero;
        string nome; 
    }lista_telefonica;

    //adcionando valores as variaveis declaradas dentro da estrutura

    lista_telefonica.numero = 985049595;
    lista_telefonica.nome = "Catarina";

    //fazendo print dos elementos dentro da estrutura

    cout << lista_telefonica.nome << ": "<< lista_telefonica.numero << "\n";

    //é possivel utilizar uma unica struct para varios item:

    struct {
        int ano;
        string modelo;
    }carro_1, carro_2;

    carro_1.ano = 2019;
    carro_1.modelo = "HB20";

    carro_2.ano = 2002;
    carro_2.modelo = "Gol Bolinha";

    //é possivel também nomear a estrutura para referenciar ela dentro da main 
    //referenciando a estrutura "garrafas":
    garrafas minha_garrafa1;
    minha_garrafa1.material = "plastico";
    minha_garrafa1.litros = 2;
    minha_garrafa1.preco = 37.90;


    cout <<"Garrafa de: "<< minha_garrafa1.material<< ", " << minha_garrafa1.litros << " litros. Por: " << minha_garrafa1.preco << "\n"; 

    return 0;
}