#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, k1, k2;
    cin >> N >> k1 >> k2;

    vector<int> A(N), B(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    for (int i = 0; i < N; ++i) {
        // Encontrar a diferença entre os elementos correspondentes dos arrays A e B
        A[i] = abs(A[i] - B[i]);
    }

    int total_operations = k1 + k2;

    // Ordenar as diferenças em ordem decrescente
    sort(A.begin(), A.end(), greater<int>());

    // Atualizar os elementos de A usando as operações disponíveis
    for (int i = 0; i < N && total_operations > 0; ++i) {
        if (A[i] > 0) {
            A[i]--;
            total_operations--;
        }
    }

    // Calcular o quadrado da diferença e somar
    long long result = 0;
    for (int i = 0; i < N; ++i) {
        result += static_cast<long long>(A[i]) * A[i];
    }

    cout << result << endl;

    return 0;
}
