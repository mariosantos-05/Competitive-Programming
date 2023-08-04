#include<iostream>
using namespace std;

int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    int array[4] = {A,B,C,D};
    int posicao;
    for(int i = 0; i < 4; i++)
    {
        if (array[i] == 1){
            posicao = i;
        }
    }

    cout << posicao+1 << "\n";

    return 0;
}