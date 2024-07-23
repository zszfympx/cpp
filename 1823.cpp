#include<bits/stdc++.h>
using namespace std;

int dp[1005][505];
int v[1005], w[1005];

int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    int n, m, t;
    scanf("%d%d%d", &n, &m, &t);
    for(int i = 1; i<=t; i++){
        cin>>v[i]>>w[i];
    }
    for(int i = 1; i<=t; i++){
        for(int j = n; j>=0; j--){
            for(int k = m; k>=0; k--){
                if(j>=v[i]&&k>=w[i]){
                    dp[j][k] = max(dp[j][k], dp[j-v[i]][k-w[i]]+1);
                }else{
                    dp[j][k] = dp[j][k];
                }
            }
        }
    }
    cout<<dp[n][m]<<" ";
    int x=dp[n][m];
    int mn = 0;
    for(int i = 1; i<=t; i++){
        for(int j = 0; j<=n; j++){
            for(int k = 0; k<=m; k++){
                if(dp[j][k]==x){
                    mn = max(mn, n-k);
                }
            }
        }
    }
    cout<<mn;
    return 0;
}