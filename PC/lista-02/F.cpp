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
#define eb emplace_back
template <class T>
void print_v(vector<T> &v) { for(auto x : v) cout << x << " "; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b;}

//declarando as variaveis 
int n, m;
stack<int, vector<int>> esteira;
vector<int> aux;
int ans=0;
//mencionando as funções para serem chamadas na main.
void update(int time);
void insert(int x, int time);


int main(){
    cin>> n >> m;
    for(int time=0, x;time<n;time++){
        cin>>x;
        x+=time;
        update(time);
        insert(x, time);
    } 
    int time;
    while(!esteira.empty()){
        time=esteira.top();
        update(time);
    }
    cout<<ans<<"\n";
    return 0;
}


//Funções de inserção dos Pães e Update Da esteira

void update(int time){
    while(!esteira.empty() && esteira.top()<=time){
        if(esteira.top() == time) ans++;
        esteira.pop();
    }
}
void insert(int x, int time){
    if(esteira.empty() || esteira.top()>=x){
        esteira.emplace(x);
        return;
    }
    for(int i=0;i<m && !esteira.empty();i++){
        int top = esteira.top();
        if(top>time) aux.eb(top);
        else if(top==time) ans++;
        esteira.pop();
    }
    aux.eb(x);
    sort(aux.begin(), aux.end());

    while(!aux.empty()){
        esteira.emplace(aux.back());
        aux.pop_back();
    }
}