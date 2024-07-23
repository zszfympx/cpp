#include<bits/stdc++.h>
using namespace std;

int n, m, g[65][3], b[65], a[65][3], dp[65][32010], w, v, q;

int main(){
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=m; i++){
        scanf("%d%d%d", &w, &v, &q);
        if(q==0){
            g[i][0] = w;
            a[i][0] = w*v;
        }else{
            b[q]++;
            g[q][b[q]]=w;
            a[q][b[q]]=w*v;
        }
    }
    for(int i = 1; i<=m; i++){
        for(int j = 0; j<=n; j++){
            dp[i][j] = dp[i-1][j];
            if(j>=g[i][0]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-g[i][0]]+a[i][0]);
            }
            if(j>=g[i][0]+g[i][1]&&a[i][1]!=0){
                dp[i][j] = max(dp[i][j], dp[i-1][j-g[i][1]-g[i][0]]+a[i][0]+a[i][1]);
            }
            if(j>=g[i][0]+g[i][2]&&a[i][2]!=0){
                dp[i][j] = max(dp[i][j], dp[i-1][j-g[i][0]-g[i][2]]+a[i][0]+a[i][2]);
            }
            if(j>=g[i][0]+g[i][1]+g[i][2]&&a[i][1]!=0&&a[i][2]!=0){
                dp[i][j] = max(dp[i][j], dp[i-1][j-g[i][0]-g[i][1]-g[i][2]]+a[i][0]+a[i][1]+a[i][2]);
            }
        }
    }
    printf("%d", dp[m][n]);
    return 0;
}