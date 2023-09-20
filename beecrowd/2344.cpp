#include<iostream>
using namespace std;

int main(){
    int nota;
    cin >> nota;
    if (nota == 0){
        cout << "E" << "\n"; 
    }
    if (nota > 0 && nota < 36)
    {
        cout << "D" << "\n";
    }
    if (nota > 35 && nota < 61)
    {
        cout << "C" << "\n";
    }
    if (nota > 60 && nota < 86)
    {
        cout << "B" << "\n";
    }
    if (nota > 85 && nota < 101)
    {
        cout << "A" << "\n";
    }
    return 0;
} 