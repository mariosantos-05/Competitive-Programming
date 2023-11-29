#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> pessoas_gripadas(N);
    for (int i = 0; i < N; i++) {
        std::cin >> pessoas_gripadas[i];
    }

    std::vector<int> vacinas_restantes(N, 0);
    int operacoes_realizadas = 0;

    for (int i = 0; i < M; i++) {
        int lj, rj, aj;
        std::cin >> lj >> rj >> aj;
        for (int j = lj - 1; j < rj; j++) {
            if (pessoas_gripadas[j] > 0 && aj > vacinas_restantes[j]) {
                operacoes_realizadas++;
                pessoas_gripadas[j] -= std::min(aj, pessoas_gripadas[j]);
                vacinas_restantes[j] += std::min(aj, pessoas_gripadas[j]);
            }
        }
    }

    std::cout << operacoes_realizadas << std::endl;

    return 0;
}
