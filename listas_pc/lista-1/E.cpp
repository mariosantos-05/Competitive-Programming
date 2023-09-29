#include <bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


int main() {
    int n;
    vector<int> a;

    cin >> n;

    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        a.push_back(aux);
    }

    sort(a.begin(),a.end());

    int days = 0;
    for(auto elem: a){
        if (elem >= days+1){
            days++;
        }
    }

    cout << days << "\n";

    return 0;
}
