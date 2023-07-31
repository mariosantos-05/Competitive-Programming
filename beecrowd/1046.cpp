#include<iostream>
using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    if (A<B)
    {
        cout << "O JOGO DUROU "<< abs((A-B)) << " HORA(S)" << "\n";
    }
    else if(A==B)
    {
        cout << "O JOGO DUROU 24 HORA(S)" << "\n";
    }
    else
    {
        cout << "O JOGO DUROU " << abs((24%A) + B) << " HORA(S)" << "\n";
    }
    return 0;
}