#include <bits/stdc++.h>
#include <string>
using namespace std;
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    int n, i; 

    vector<string> name;
    vector<string> init;
    vector<int> final;
    map<string, int> names;
    cin >> n;
    string aux;
    for(i = 0; i < n; i++){
        cin >> aux;
        name.push_back(aux);
    }
    init = name;

    sort(name.begin(),name.end());
    for(i = 0; i < n; i++){
        names[name[i]] = i;
    }

    for(i = 0; i < n; i++){
            final.push_back(names[init[i]]);
    }

    for(auto elem: final){
        cout << elem << " ";
    }
    cout << "\n";

    return 0;
}