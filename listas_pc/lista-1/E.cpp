#include <bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


template<typename T>
bool allEqual(vector<T> const &v) {
    return adjacent_find(v.begin(), v.end(), not_equal_to<T>()) == v.end();
}


int solve(){
    int i, n,aux,days;
    vector<int> a;
    cin >> n;

    if (n <= 0)
        return 0;

    for(i = 0; i < n; i++){
        cin >> aux;
        a.push_back(aux);
    }

    if(allEqual(a) == true and a[0] == 0)
        return 0;

    days = 1;
    for(auto elem: a){
        if (elem >= days+1){
            days++;
        }
    }
    return days;    
}

int main(){
    cout << solve() << "\n";
    return 0;
}

