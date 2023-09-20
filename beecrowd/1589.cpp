#include<iostream>
using namespace std;

int main(){
    int n, R1, R2;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> R1 >> R2;
        cout << R1+R2 << "\n";
    }
    return 0;
}