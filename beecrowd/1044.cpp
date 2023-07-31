#include<iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    if (max(A,B)%min(A,B) == 0){
        //eh divisivel
        cout << "Sao Multiplos" << "\n";
    }
    else{
        cout << "Nao sao Multiplos" << "\n";
    }
    return 0;
}