#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    double A,B,C,D,E,F;
    cin >> A >> B >> C >> D >> E >> F;
    double num[6] = {A,B,C,D,E,F};
    int pos = 0;
    double av = 0;
    for(int i = 0; i < 6; i++){
        if (num[i] > 0){
            pos += 1;
            av += num[i]; 
        }
    }
    
    cout << pos << " valores positivos" << "\n";
    cout << fixed;
    cout <<setprecision(1)<< av/pos << "\n";
    
    
 
    return 0;
}