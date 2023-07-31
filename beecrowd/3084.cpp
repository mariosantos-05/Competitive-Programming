#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*the hour must be divided by 30
    the minute must be divided by 6
    */
   int A, B;
   while (cin >> A >> B)
   {  
        int hour = A/30;
        int min = B/6;
        cout << setw(2) << setfill('0') <<  hour << ":"
        <<setw(2) << setfill('0') << min << "\n";
        //there's probably a better way to do this line;
   }
   return 0;
}