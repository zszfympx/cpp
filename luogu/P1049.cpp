#include<bits/stdc++.h>
using namespace std;

int n, m, w, dp[40][20010];

int main(){
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=m; i++){
        scanf("%d", &w);
        for(int j = 1; j<=n; j++){
            if(j>=w){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w]+w);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    printf("%d", n-dp[m][n]);
    return 0;
}