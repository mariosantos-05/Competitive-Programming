#include <iostream>
using namespace std;

 
 
 
int main() {
    double A;
    cin >> A;
    if (A < 0 || A > 100 ){
        cout << "Fora de intervalo" << "\n";
    }
    else if (A >= 0 && A <= 25){
        cout << "Intervalo [0,25]" << "\n";
    }
    else if (A > 25 && A <= 50){
        cout << "Intervalo (25,50]" << "\n";
    }
    else if (A > 50 && A <= 75){
        cout <<  "Intervalo (50,75]" << "\n";
    }
    else{
        cout << "Intervalo (75,100]" << "\n";
    }
    return 0;
}