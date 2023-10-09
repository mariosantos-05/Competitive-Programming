#include <bits/stdc++.h>
using namespace std;
#define desyn ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
    int n;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        nums.push_back(aux);
    }
    int sum = 0;

    int big_one = *max_element(nums.begin(), nums.end());

    for(int i = 0; i < n; i++){
        sum = sum+ abs(nums[i]-big_one);
    } 

    cout << sum << "\n";
    return 0;
}