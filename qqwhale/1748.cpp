#include<bits/stdc++.h>
using namespace std;
int dp[51][401][401], m1, m2, n, w1, w2, v;

int main(){
    scanf("%d%d%d",&m1,&m2,&n);
    for(int i=1; i<=n; i++){
        scanf("%d%d%d", &w1, &w2, &v);
        for(int j = 1; j<=m1; j++){
            for(int k = 1; k<=m2; k++){
                if(j>=w1&&k>=w2){
                    dp[i][j][k] = max(dp[i-1][j][k], dp[i-1][j-w1][k-w2]+v);
                }else{
                    dp[i][j][k] = dp[i-1][j][k];
                }
            }
        }
    }
    printf("%d", dp[n][m1][m2]);
}