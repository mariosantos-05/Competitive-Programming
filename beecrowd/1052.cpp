#include <iostream>
#include <map>
using namespace std;
 
int main(){
    int x;
    cin >> x;
    map<int, string> month = {{1, "January",},
                            {2, "February",},
                            {5, "May",},
                            {4, "April",},
                            {3, "March",},
                            {6, "June",},
                            {7, "July",},
                            {8, "August",},
                            {9, "September",},
                            {10,"October",},
                            {11,"November",},
                            {12,"December",}
                            }; 

    cout <<  month[x] << "\n";
    return 0;
}