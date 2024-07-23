#include<bits/stdc++.h>
using namespace std;

int dp[40][30010], w, v;

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=m; i++){
        scanf("%d%d", &w, &v);
        v*=w;
        for(int j = 1; j<=n; j++){
            if(j>=w){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w]+v);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    printf("%d", dp[m][n]);
    return 0;
}