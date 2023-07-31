#include <iostream>
using namespace std;

int main(){
    /*promover ordenamento simples entre 3 números distintos*/

    /*Tentar usar buuble sort tendo em vista o tanto limitado de elementos*/

    int A, B , C;
    cin >> A >> B >> C;

    //bubble sort.cpp
    int array[3] = {A,B,C};
    int counter = 1;
    while(counter < 3){
        for(int i = 0; i < 3-counter; i++){
            if (array[i] > array [i+1])
            {
                int aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }
            

        }
    
        counter ++;
    }
    cout << array[0] << "\n" << array[1] << "\n" << array [2] << "\n"; 
    //segundo parte do print
    cout << "\n" << A << "\n" << B << "\n" << C << "\n";

    return 0;

}