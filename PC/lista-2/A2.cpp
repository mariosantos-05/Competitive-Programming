#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> pilha;
    string frase;
    int f = 0, fp = 0;
    cin >> frase;
    for (char c : frase) {
        if (c == 'r') {
            pilha.push(c);
            f += fp;
            fp = 0;
        } else if (!pilha.empty() && c == 's' && pilha.front() == 'r') {
            pilha.pop();
            fp = 0;
        } else if (!pilha.empty() && c == '.' && pilha.front() == 'r')
            fp++;
    }

    f += fp;
    cout << f << "\n";

    return 0;
}