#include <bits/stdc++.h>
using namespace std;
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define pb push_back
template <class T>
void print_v(vector<T> &v) { for(auto x : v) cout << x << " "; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b;}
//simular a questão feita em sala de aula "tea queue"

//fazer a soma de todos os tempos e analisar as reentradas na fila;
void solve(){
    int n, r, t, p,aux;
    cin >> n;
    queue<pii> cli;
    queue<pii> re;
    for(int i = 0; i < n; i++){
        cin >> t >> p >> r;
        cli.push({t,0});
        re.push({r,p});
    }
    //utilizar o second do clinete como a posição temporal dele
    //ver o second do retorno como paciencia
    int time = 0;
    while(!cli.empty()){
        //se a Paciencia do cliente for menor que o tempo atual retornar ele para o final da fila
        if(re.front().second > time){
            time+= cli.front().first;
            re.pop();
            cli.pop();
        }
        else if(cli.front().second + re.front().second > time){
            time+= cli.front().first;
            re.pop();
            cli.pop();
        }
        //confirmar se a posição for maior do que o tempo atual atualizar o tempo para a posição. exitem gaps entre os tempos de atendimento.
        else{
            cli.push({cli.front().first, cli.front().second + re.front().first});
            re.push({re.front().first,re.front().second});
            re.pop();
            cli.pop();
        }
    }
    cout << time << "\n";
}

int main(){
    desync;
    solve();
    return 0;
}