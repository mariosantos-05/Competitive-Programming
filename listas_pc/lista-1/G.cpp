#include<bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int solve(string x){
    map<string, int> dic;
    string aux;
    for(int i = 0; i < sizeof(x); i++){
        cout << x[i] << "\n";
        aux = x[i];
        if (dic.find(aux) == dic.end()){
            dic[aux] = 1;
        }
        else{
            return false;
        }
    }
    return true;

}

int main(){
    int n;
    cin >> n;
    
    n++;
    string m = to_string(n);
    
    cout << solve(m) << "\n";


    /*while (solve(m) != true){
        n = stoi(m);
        n++;
        m = to_string(n);
        cout << "n " << n << "m " << m;
    }
    cout << n << "\n";*/
    return 0;
}