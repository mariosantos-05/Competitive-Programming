#include <bits/stdc++.h>
using namespace std;
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
    int n, f, p, aux, tempo = 0;
    cin >> n >> f >> p;
    queue<int> q;

    for(int i = 0; i < n; i++){
        cin >> aux;
        q.push(aux);
    }
    int i = 0;
    while(!q.empty()){
        if (i%f != 0){
            tempo++;
            q.pop();
        }
        else if(q.front() <= p){
            tempo+= 5;
            q.pop();
        }
        else{
            tempo+=10;
            q.push(q.front()-2);
            q.pop();
        }
        i++;
    }
    cout << tempo << "\n";
}

int main(){
    desync;
    solve();
    return 0;
}
