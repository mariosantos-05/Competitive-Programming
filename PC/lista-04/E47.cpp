#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> vetor(n);
    for (int i = 0; i < n; ++i) {
        cin >> vetor[i];
    }

    sort(vetor.begin(), vetor.end()); // Ordena o vetor em ordem decrescente

    vector<long long> prefixSum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + vetor[i];
    }

    long long resposta = 0;

    for (int i = 0; i < q; ++i) {
        int li, ri;
        cin >> li >> ri;
        resposta += prefixSum[ri] - prefixSum[li - 1];
    }

    cout << resposta << endl;

    return 0;
}
