#include <iostream>
#include <map>
using namespace std;


 
int main() {
    int curupira, boitata, boto, mapinguari , iara;
    cin >> curupira;
    cin >> boitata;
    cin >> boto;
    cin >> mapinguari;
    cin >> iara;
    //montar um dicionario com a quantidade de gramas de cada 
    
    int soma = (curupira*300) + (boitata*1500) + (boto*600) + (mapinguari*1000) + (iara*150) + 225;

    cout << soma << "\n";

 
    return 0;
}