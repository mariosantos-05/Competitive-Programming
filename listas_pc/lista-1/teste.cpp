#include<bits/stdc++.h>
using namespace std;

int main(){   
    string a;
    cin >> a;
    string arr[4] = {};
    for(int i = 1; i <= 4; i++){
        arr[i] = a[i];
    }
    size_t len = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + len);
    bool result = distance(arr, unique(arr, arr + len)) == len;
    return 0;
}