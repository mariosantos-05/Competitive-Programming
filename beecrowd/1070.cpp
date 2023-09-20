#include <iostream>
using namespace std;
 
int main(){
    int x;
    cin >> x;
    int counter = 0;
    for(int i = x; counter < 6;i++)
    {
        if(i%2 != 0)
        {
            cout << i <<"\n";
            counter += 1;
        }
    }
    
    return 0;
}