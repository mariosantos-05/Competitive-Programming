#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double n1, n2, n3, n4, sub;
    cin >> n1 >> n2 >> n3 >> n4;
    double av = ((n1*2)+(n2*3)+(n3*4)+n4)/10;
    cout << fixed;
    cout << "Media: " << setprecision(1) << av << "\n";
    if (av > 7.0){
        cout << "Aluno aprovado." << "\n";
    }
    else if (av < 5.0){
        cout << "Aluno reprovado." << "\n";
    } 
    else{
        cout << "Aluno em exame." << "\n";
        cin >> sub;
        cout << "Nota do exame: " << setprecision(1) << sub << "\n"; 
    
        double new_av = (av+sub)/2;
        if (new_av >= 5.0){
            cout << "Aluno aprovado." << "\n";
            cout << "Media final: " << setprecision(1) << new_av << "\n";
        }
        else{
            cout << "Aluno reprovado." << "\n";
            cout << "Media final: " << setprecision(1) << new_av << "\n";
        }
    }
}