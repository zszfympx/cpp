#include<bits/stdc++.h>
using namespace std;
const int maxn=500;
int w, v, dp[maxn][maxn];

int main(){
    int n, m;
    scanf("%d%d", &m, &n);
    for(int i = 1; i<=n; i++){
        scanf("%d%d", &w, &v);
        for(int j = 1; j<=m; j++){
            if(j>=w){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w]+v);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    printf("%d", dp[n][m]);
    return 0;
}