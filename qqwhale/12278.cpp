#include<bits/stdc++.h>
using namespace std;

int f[75];

int main(){
    memset(f, 0, sizeof f);
    int n;
    f[1] = 1, f[2] = 2, f[3] = 4;
    while(n--){
        scanf("%d", &n);
        if(n==0) return 0;
        for(int i = 4; i<=n; i++){
            if(f[i]!=0) continue;
            f[i] = f[i-3]+f[i-2]+f[i-1];
        }
        printf("%d\n", f[n]);
    }
}