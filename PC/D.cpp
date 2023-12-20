#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arabica_prices(n);
    vector<int> conilon_prices(n);

    for (int i = 0; i < n; i++) {
        cin >> arabica_prices[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> conilon_prices[i];
    }

    vector<pair<int, int>> diff_prices(n);

    for (int i = 0; i < n; i++) {
        diff_prices[i] = {arabica_prices[i] - conilon_prices[i], i};
    }

    sort(diff_prices.rbegin(), diff_prices.rend());

    long long total_arabica = 0;

    for (int i = 0; i < n; i++) {
        int index = diff_prices[i].second;
        int available_arabica = min((long long)1e9, (long long)k / arabica_prices[index]);
        total_arabica += available_arabica;
        k -= available_arabica * arabica_prices[index];
    }

    cout << total_arabica << endl;

    return 0;
}
