#include <iostream>
using namespace std;
 
int main() {
    int n, s, m;
    cin >> n >> s;
    //S é o saldo incial da conta!
    int ref = s;
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        s += m;
        if(s < ref)
        {
            ref = s;
        }
    }
 
    cout << ref << "\n";
    return 0;
}