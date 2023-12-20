#include<bits/stdc++.h>
using namespace std;
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void merge(vector<int> v,vector<int> temp, int l, int r, int mid){
    int i , j , k;
    i = l;
    j = mid+1;
    k = l;

    while(i <= mid && j <= r){
        if(v[i] <= v[j]){
            temp[k]= v[i];
            i++;
        }
        else{
            temp[k] = v[j];
            j++;
        }
        k++;
    }
    //Completar o vetor temporario com subproblema da esquerda
    while(i <= mid){
        temp[k] = v[i];
        k++;
        i++;
    }
    while(j <= r){
        temp[k] = v[j];
        k++;
        j++;
    }
    for(int t = l; t < r; t++){
        v[t] = temp[k];
    }
}


void mergeSort(vector<int> v, vector<int> temp,int l, int r){

    //etapa da divisao:
    //As operações se limitam a sub vetores do original, isso define que não pode existir uma perda ou 'subescrição' de uma informação para um indice estranho
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(v, temp, l,mid);
        mergeSort(v, temp, mid+1,r);
        merge(v,temp,l,mid,r);
    }
}


void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> temp(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    mergeSort(v,temp, 0,v.size());
    for(auto& x: v) cout << x << " ";
    cout << "\n";

}


int main(){
    desync;
    solve();
    return 0;
}