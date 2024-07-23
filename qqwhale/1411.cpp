#include<bits/stdc++.h>
using namespace std;

int n, v, m, dp[35][1010], x, y, sum;

int main(){
    scanf("%d%d%d", &n, &v, &m);
    for(int i = 1; i<=n; i++){
        scanf("%d%d", &x, &y);
        for(int j = 1; j<=v; j++){
            if(j>=x&&sum+y<=m){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-x]+1);
            }
        }
    }
    printf("%d", dp[n][m]);
}