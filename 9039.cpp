#include<bits/stdc++.h> 
using namespace std;
#define maxn 1010
int G[maxn][maxn];
bool flag = false;
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &G[i][j]);
            if(G[i][j]==0) flag = true;
        }
    }
    if(!flag){
        puts("Fail");
        return 0;
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(G[i][j]==0){
               int sum = 0;
               for(int x = 0; x<n; x++) sum+=G[i][x];
               for(int y = 0; y<n; y++) sum+=G[y][j];
               ans=max(sum, ans); 
            }
        }
    }
    printf("%d", ans);
    return 0;
}