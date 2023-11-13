#include<bits/stdc++.h>
using namespace std;
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    desync;
    int n,aux,q;
    cin >> n;
    set<int> conj;
    for(int i = 0; i < n ; i++){
        cin >> aux;
        conj.insert(aux); //O(log n)
    }
    cin >> q;
    while(q--){
        cout << "verdade" << "\n";
        cin >> aux;
        if(conj.count(aux)) cout << "Existe o elemento: " << aux << " na arvore!\n"; // retorna inteiro, consulta em O(log n)
        else cout << "Elemento não existe\n";
        //Boa pratica verificar se o elemento esta presente na arvore antes de remover
        conj.erase(4); // remoção em O(log n)

        //TRAVESSIA (pré ordem, Média ordem, Pós Ordem)

        //O set utiliza o pré ordem O(n)

        set<int>::iterator pset; // armazena endereço de um set 

        for(pset = conj.begin(); pset != conj.end(); pset++){
            cout << *pset << " ";
        }

        cout << "\n"; 

        for(auto& elem: conj){
            cout << elem << " ";
        }

        cout << "\n";






    }
    return 0;
}

//map é um set de pairs 