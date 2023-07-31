#include<iostream>
using namespace std;

int main(){
    double A, B, C;
    cin >> A >> B >> C;
    //fazer um bubble sort reverso
    double lados[3] = {A,B,C};
    int counter = 1;
    while(counter < 3)
    {
        for(int i = 0; i < 3-counter; i++)
        {
            if (lados[i] < lados[i+1])
            {
                int aux = lados[i];
                lados[i] = lados[i+1];
                lados[i+1] = aux;
            }
        }
        counter ++;
    }  

    
    A = lados[0];
    B = lados[1];
    C = lados[2];

    //cout << "lados" << lados[0] << lados[1] << lados[2] << "\n"; 


    double A2 = A*A;
    double B2 = B*B;
    double C2 = C*C;

    if (A >= (B+C)){
        cout << "NAO FORMA TRIANGULO" << "\n";
    }
    else{
        if(A2 == (B2+C2)){
            cout << "TRIANGULO RETANGULO" << "\n";
        }
        if(A2 > (B2+C2)){
            cout << "TRIANGULO OBTUSANGULO" << "\n";
        }
        if(A2 < (B2+C2)){
            cout << "TRIANGULO ACUTANGULO" << "\n";
        }
        if(A == B && B == C){
            cout << "TRIANGULO EQUILATERO" << "\n";
        }
        if((A == B && B != C)||(A == C && C != B)||(C == B && B != A)){
            cout << "TRIANGULO ISOSCELES" << "\n";
        }
    }
    return 0;
    
}