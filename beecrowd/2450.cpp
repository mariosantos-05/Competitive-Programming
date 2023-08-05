#include<iostream>
using namespace std;

/*string triangular(int n, int m){


    
    //identificar uma matriz triangular!
    //receber a matriz por meio da linha!
    int matriz[n][m];
    for(int i= 0; i<n; i++){
        for (int j = 0; j < m; j++){
            cin >> matriz[i][j]; 
        }
    }
    string ans; 
    for(int i= 0; i<n; i++){
        for (int j = 0; j < m; j++){
            if (i <= j){
                if (matriz[i][j] != 0)
                {
                    return "N";

                }
            }
        }
    }
    
    return "S";

}  
 */


int main(){
    int n,m;
    cin >> n >> m;
    

    //recebendo a matriz
    int array[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> array[i][j];

        }
    }

    /*Uma matriz é em forma de escada quando, para cada linha, as seguintes condições são atendidas:

    Se a linha tiver apenas zeros, todas as linhas abaixo dela também terão apenas zeros.
    Caso contrário, X é o elemento diferente de zero da linha mais à esquerda; Então, para todas as linhas abaixo da linha X, todos os elementos nas colunas à esquerda de X e X são zero.*/

    //se existir 0 em uma coluna tudo abaixo dela deve ser 0!
    //quantidades de zeros até elemento x. se for maior ou igual é "escada matrix". se a quantidade diminuir automaticamente não é
    int ref = 0;
    bool valor, ok = true;
    for(int i = 0; i < n; i++){
        int zeros = 0;
        for(int j = 0; j < m; j++){
            if(array[i][j] == 0)
            {
                zeros += 1;
                //cout << zeros << "\n"; 
            }
            if(array[i][j] == 0 && valor == false){
                //cout << "Valor verdade 'false'" << "\n";
                ok = false;
            }
            else
            {
                valor = false;
            }
        }

        //cout << zeros << "\n";
        //cout << ref << "\n";
        //if (i == (n-1) && zeros == n && ok == false){
        //cout << "zeros_1: " << zeros << "\n";
        //cout << ok << "\n";
        if (i == (n-1) && ok == false && zeros == n)
        {    
            /*cout << "zeros: " << zeros << "\n";
            cout << "valor verdade" << "\n";*/
            cout << "N" << "\n";
            return 0;        
        }
        else{
            
            //cout << "valor verdade else" << "\n";
        
            if (zeros >= ref)
            {
                //cout << "Valor verdade, 0 maior que ref" << "\n";
                ref = zeros;
            }
            else
            {
                //cout << "Valor verdade, else funciona!" << "\n";
                cout << "N" << "\n";
                return 0;
            }
        }    
    }

    cout << "S" << "\n";
    return 0;
}