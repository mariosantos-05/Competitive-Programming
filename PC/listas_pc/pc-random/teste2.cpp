#include<bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


int main(){
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;

    a++;
    vector<int> numbers = { a, b, c, d, e };

    for(auto elem: numbers){
        cout << elem << "\n";
    }
    return 0;
}