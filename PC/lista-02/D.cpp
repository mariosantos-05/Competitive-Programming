#include <bits/stdc++.h>
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    
    vector<int> atendimento(n);
    vector<int> items(m);
    vector<long long> time(n, 0); 

    for (int i = 0; i < n; i++) {
        cin >> atendimento[i];
    }

    for (int j = 0; j < m; j++) {
        cin >> items[j];
    }
    
    int tempo_total = 0;
    for (int j = 0; j < m; j++) {
        int min_time = 0;
        for (int i = 1; i < n; i++) {
            if (time[i] < time[min_time]) {
                min_time = i;
            }
        }
        tempo_total += time[min_time];
        time[min_time] += static_cast<long long>(items[j]) * atendimento[min_time];
    }

    tempo_total = *max_element(time.begin(), time.end());

    cout << tempo_total << endl;
}

int main(){
    desync;
    solve();
    return 0;
}
