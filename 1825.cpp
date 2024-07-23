#include<bits/stdc++.h>
using namespace std;
const int maxn=12890;
int w[maxn], v[maxn], dp[maxn];

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=n; i++){
        scanf("%d%d", &w[i], &v[i]);
    }
    for(int i = 1; i<=n; i++){
        for(int j = m; j>=v[i]; j--){
            if(j>=w[i]){
                dp[j] = max(dp[j], dp[j-w[i]]+v[i]);
            }
        }
    }
    printf("%d", dp[m]);
    return 0;
}