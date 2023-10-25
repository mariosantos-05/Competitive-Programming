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
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }

int biggest(stack<int>& p){
    if(p.empty()) return -1000000001; //falha

    stack<int> p_aux;
    int maior = p.top();
    p.pop();

    while(!p.empty()){
        int elem = p.top();
        p.pop();
        if (elem > maior) maior = elem;a
        p_aux.push(elem);
    }

    while(!p_aux.empty()){
        int elem = p_aux.top();
        p_aux.pop();
        p.push(elem);
    }

    return maior;
}


int main(){
    desync;
    int n, q, aux, tipo, maior;

    stack<int> pilha;
    cin >> n >> q;


    for(int i = 0; i < n ; i++){
        cin >> aux;
        pilha.push(aux);

    }


    while(q--){
        cin >> tipo;
        if (tipo == 1){
            maior = biggest(pilha);
            cout << maior << "\n";
        }
        else{
            if (tipo == 2){
                cin >> aux;
                pilha.push(aux);
            }
            else{
                pilha.pop();
            }
        }
    }

    return 0;
}