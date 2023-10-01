#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void task(){
    int n, k;
    scanf("%d%d", &n, &k);
    char s[k+5];
    scanf("%s", s);
    int pos = 0;
    int v = 1;
    for(int i=0;i<=1e8;i++){
        v = v * 10;
        int d = v/n;
        v = v%n;
        if(d == s[pos] - '0'){
            pos++;
            if(pos == k){
                printf("Sim\n%d\n",i - k + 1);
                return;
            }
        }else{
            pos = 0;
            if(d == s[pos] - '0') pos = 1;
        }
    }

    printf("Nao\n");

}

int main() {
    int t = 1;
    //scanf("%d", &t);
    while(t--){
        task();
    }
    return 0;
}
