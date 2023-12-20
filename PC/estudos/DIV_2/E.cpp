#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        bool possible = true;

        for (int i = 0; i < n; ++i) {
            if (a[i] < b[i]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            for (int i = 1; i < n; ++i) {
                if (b[i] > b[i - 1]) {
                    // If b[i] is greater than the previous element, update a[i] and propagate the change
                    for (int j = i; j < n && b[j] > b[j - 1]; ++j) {
                        a[j] = max(a[j], b[i]);
                    }
                }
            }

            // Check if array a is equal to array b
            for (int i = 0; i < n; ++i) {
                if (a[i] != b[i]) {
                    possible = false;
                    break;
                }
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
