#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double A, B, C;
    //para ser possivel um triangulo a soma de 2 lados deve ser maior que o terceiro lado!
    cin >> A >> B >> C;
    if((A+B) > C && (A+C) > B && (B+C) > A){
        //é possivel fazer um triangulo!
        double per = A+B+C;
        cout << fixed;
        cout << "Perimetro = " << setprecision(1) << per << "\n";
    }
    else{
        //area do trapezio
        double area = ((A+B)*C)/2;
        cout << fixed;
        cout << "Area = " << setprecision(1) << area << "\n";
    }

    return 0;
}