#include<bits/stdc++.h>
using namespace std;
#define maxn 1010

int a[maxn], b[maxn];
int G[maxn][maxn];
bool flag = false;

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            scanf("%d", &G[i][j]);
            if(G[i][j]==0) flag = true;
            a[i]+=G[i][j];
            b[j]+=G[i][j];
        }
    }
    if(!flag){
        puts("Fail");
        return 0;
    }
    int ans = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(G[i][j]==0){
                int sum = 0;
                sum+=a[i]-a[i-1];
                sum+=b[i]-b[i-1];
                ans=max(sum, ans);
            }
        }
    }
    printf("%d", ans);
    return 0;
}