#include<bits/stdc++.h>
using namespace std;

int n, m, t, g[210][210], w[210], v[210], b[210], dp[210], x;

int main(){
    scanf("%d%d%d", &n, &m, &t);
    for(int i = 1; i<=m; i++){
        scanf("%d%d%d", &w[i], &v[i], x);
        b[x]++;
        g[x][b[x]]=i;
    }
    for(int i = 1; i<=t; i++){
        for(int j = n; j>=0; j--){
            for(int k = 1; k<=b[i]; k++){
                if(j>=w[g[i][k]]){
                    dp[j] = max(dp[j], dp[j-w[g[i][k]]]+v[g[i][k]]);
                }
            }
        }
    }
    printf("%d", dp[n]);
    return 0;
}