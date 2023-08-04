#include <iostream>
using namespace std;

int fatorial(int x){
    if (x > 1){
        return x*(fatorial(x-1));
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    cin >> n;
    cout << fatorial(n) << "\n";
    return 0;
}
