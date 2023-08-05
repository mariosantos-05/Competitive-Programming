#include <map>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    int n, cod, amount;
    cin >> n;
    map<int, double> preco={{1001, 1.50,},
                           {1002, 2.50,},
                           {1003, 3.50,},
                           {1004, 4.50,},
                           {1005, 5.50,}};
                           
    double price = 0;                        
     for(int i = 0; i < n; i++)
    {
        cin >> cod >> amount;
        price += preco[cod]*amount;
    }
    cout << fixed;
    cout << setprecision(2) << price << "\n";
 
    return 0;
}