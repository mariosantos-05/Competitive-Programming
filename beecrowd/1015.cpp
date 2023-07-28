#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    double x1,y1,x2,y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    double radicando = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    double distance = sqrt(radicando); 
    cout << fixed;
    cout << setprecision(4) << distance << "\n";
    return 0;
}