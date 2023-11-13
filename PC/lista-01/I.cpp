#include <bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main(){
    //declarando tipos
    int n, m, i, j, aux2, c;
    vector< pair<int, int> > on;
    string nums, aux;

    //tamanho da matriz
    cin >> n >> m;

    //pegando os elementos da matriz
    for(i = 0; i < n; i++){
        cin >> nums;
        for(j = 0; j < m; j++){
            aux = nums[j];
            aux2 = stoi(aux);
            if (aux2 == 1){
                on.push_back(make_pair(i,j));
            }
        }
    }
    //Done
    if (on.empty()){
        cout << "0x0" << "\n";
    }
    else{   
        sort(on.begin(),on.end());
        int a = abs(on[on.size()-1].first - on[0].first) + 1;

        sort(on.begin(), on.end(), sortbysec);
        int b = abs(on[on.size()-1].second - on[0].second) + 1; 

        cout << b << "x" << a << "\n";
    }
    return 0;
}