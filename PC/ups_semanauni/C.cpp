#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string s;
vector<string> eventos;
int sSize;
bool solve(int pos, int index){
    if(index == 5) return true;

    bool ok = false;

    string ev = eventos[index];
    int tam = ev.size();
    int p = 0;
    for(int i=pos;i<sSize;i++){
        if(tolower(ev[p]) == tolower(s[i])){
            p++;
            if(p == tam){
                ok |= solve(i+1, index+1);
                break;
            }
        }else{
            p = 0;
            if(tolower(ev[p]) == tolower(s[i])) p = 1;
        }
    }

    return ok;
}

void task(){

    eventos.push_back("selado");
    eventos.push_back("registrado");
    eventos.push_back("carimbado");
    eventos.push_back("avaliado");
    eventos.push_back("rotulado");

    cin >> s;
    sSize = s.size();
    printf("%s\n", solve(0, 0) ? "Sim, sim, sim, sim." : "Nao vai a lugar nenhum!");
}

int main() {
    int t = 1;
    //scanf("%d", &t);
    while(t--){
        task();
    }
    return 0;
}
