//manipulação de strings

#include <iostream>
// É necessario incluir a bilioteca "string" para de fato manipular as strings
#include <string>
using namespace std;

int main(){

    //definindo uma string 

    string greetings = "Hello!";


    cout << greetings << "\n";

    //concatenando duas strings diferentes

    string last_name = "Santos";
    string first_name = "Mario";

    cout << first_name + " " + last_name + "!" << "\n";

    string full_name = first_name.append(" " + last_name);

    //diferente do pilon, em c++ o .append é usado para strings 
    cout << "utilizando o append na string: " << full_name << "\n";


    //descobrindo o tamanho da string, só é necessario usar str.length() ou str.size()

    cout << "full_name len is: " << full_name.length() << "\n";


    //para acessar os caracteres individualmente é só ir pelo indice e usar []

    cout << "o indice 0 da string full_name é: " << full_name[0] << "\n";

    //para mudar caracteres especificos é só fazer a equivalencia. str[i] = k
    full_name[0] = 'k';

    cout << "mudando a primeira letra do nome para K temos: " << full_name << "\n";

    string new_name;

    cout << "digite um novo último nome: ";
    // cin só pega apenas uma unica palavra que é finalizada pelo espaço
    cin >> new_name;

    full_name.append(" " + new_name);
    
    cout << full_name << "\n";

    //pegando multiplas palavras
    string full_name_2;

    getline (cin, full_name_2);

    cout << "o nome completo_2: " << full_name_2 << "\n"; 
    return 0; 

}