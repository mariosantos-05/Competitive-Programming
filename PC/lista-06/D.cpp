#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<char>> labyrinth(n, vector<char>(m));

    // Input labyrinth
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> labyrinth[i][j];
        }
    }

    // Find the first empty cell to start the filling process
    int i = 0, j = 0;
    while (labyrinth[i][j] != '.') {
        if (j == m - 1) {
            j = 0;
            ++i;
        } else {
            ++j;
        }
    }

    // Fill k cells with walls
    int walls_added = 0;
    while (walls_added < k) {
        labyrinth[i][j] = 'X';
        ++walls_added;

        if (j < m - 1 && labyrinth[i][j + 1] == '.') {
            ++j;
        } else if (i < n - 1 && labyrinth[i + 1][j] == '.') {
            ++i;
        } else {
            break;
        }
    }

    // Output the modified labyrinth
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << labyrinth[i][j];
        }
        cout << "\n";
    }

    return 0;
}

