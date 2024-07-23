#include<bits/stdc++.h>
#include <cctype>
using namespace std;
int m, yue[1001], dp[1010];
int main(){
    scanf("%d", &m);
    for(int i = 1; i<=m; i++){
        for(int j = 1; j<=i; j++){
            if(!i%j) yue[i]++;
        }
    }
    for(int i=1; i<=m; i++){
        for(int j = m; j>=i; j--){
            dp[j] = max(dp[j], dp[j-1]+yue[i]);
        }
    }
    printf("%d", dp[m]);
}