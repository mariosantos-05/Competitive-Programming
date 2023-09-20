#include<iostream>
using namespace std;

int main(){
    int ref, A , B , C , D, E;
    cin >> ref;
    cin >> A >> B >> C >> D >> E;
    int guess[5] = {A,B,C,D,E};

    //percorrer a "Array" e comparar com a referencia, quando valor verdade for adcionado adcionar a uma varival externa

    int right = 0; 
    for(int i = 0; i < 5; i++)
    {
        if (guess[i] == ref)
        {
            right += 1;
        }
    }
    cout << right << "\n";
    return 0;
}