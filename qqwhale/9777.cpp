#include<bits/stdc++.h>
using namespace std;
int dp[110], a[110], n;
int main(){
   	scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        scanf("%d", &a[i]);
        dp[i] = INT_MAX;
    }
    dp[1] = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=a[i]; j++){
            dp[i+j] = min(dp[i+j], dp[i]+1);
            
        }
    }
    printf("%d", dp[n]);
}