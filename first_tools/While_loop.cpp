#include<iostream>
using namespace std;



int main(){
    //utilizando While loop
    int i = 0;
    cout << "contagem regressiva:" << "\n";
    while (i<5)
    {
        cout << i << "\n";
        i++; 
    }
    

    //Além do while loop, existe o "do while loop":
    int j = 0;
    do {
        cout << j << "\n";
        j++;
    }
    while (j<5);

    return 0;
}