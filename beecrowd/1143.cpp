#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int n, i, j;
    /*
    utilizar uma contagem crescente de 1 até o número n como a coluna 1
    nas seguintes colunas fazer o correspondente elevado ao quadrado e 
    posteriormente ao cubo
    */
    cin >> n;
    int matriz[n][3];
    int referencia = 0;
    int contador = 1;   
    for(i = 0; i < n; i++){
        referencia = n-(n-contador);
        int ref_2 = referencia;
        for(j = 0; j < 3; j++){
            matriz[i][j] = ref_2;
            if (j == 2){
                cout << setw(2) << setfill('0') << matriz[i][j];
                ref_2 = ref_2*referencia;
            }
            else{
                cout << setw(2) << setfill('0') << matriz[i][j] << " ";
                ref_2 = ref_2*referencia;
            }    
        }
        cout << "\n";
        contador += 1;
    } 


    return 0;
}