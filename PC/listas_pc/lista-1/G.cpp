#include<bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int solve(string x){
    vector<string> num;
    for(int i = 0; i < 4; i++){
        string aux;
        aux = x[i];
        num.push_back(aux);
    }
    sort(num.begin(), num.end());
    auto it = unique(num.begin(), num.end());
    num.resize(distance(num.begin(), it));

    if( num.size() != 4)
        return 0;
    else
        return 1;

}

int main(){
    int n;
    cin >> n;
    n++;
    string m = to_string(n);

    while (solve(m) != true){
        n = stoi(m);
        n++;
        m = to_string(n);
    }
    cout << n << "\n";
    return 0;
}