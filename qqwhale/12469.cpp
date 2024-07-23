#include<bits/stdc++.h>
using namespace std;
const int maxn = 1010;

int a[maxn], dp[maxn];

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    dp[1] = 1;
    int ans = 1;
    for(int i = 2; i<=n; i++){
        dp[i] = 1;
        for(int j = 1; j<=i; j++){
            if(a[j]<a[i]){
                dp[i] = max(dp[i], dp[j]+1);
                ans=max(ans, dp[i]);
            }
        }
    }  
    printf("%d", ans);
    return 0;
}