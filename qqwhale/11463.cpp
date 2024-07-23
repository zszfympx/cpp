#include<bits/stdc++.h>
using namespace std;
const int maxn = 110;

int G[maxn][maxn], book[maxn][maxn]; char c;
int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0};
int n, m, ans1 = 0, ans2 = 0, sum = 0;

void dfs(int x, int y){
    for(int k = 0; k<4; k++){
        int xx = x+dx[k], yy = y+dy[k];
        if(0<xx&&xx<=n&&0<yy&&yy<=m&&G[xx][yy]==0&&book[xx][yy]==0){
            book[xx][yy] = 1;
            sum++;
            dfs(xx, yy);
        }
    }
}

int main(){
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin>>c;
            G[i][j] = c=='*'?1:0;
        }
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(G[i][j]==0&&book[i][j]==0){
                sum = 1;
                book[i][j] = 1;
                dfs(i, j);
                ans1 = max(sum, ans1);
               	ans2++; 
            }
        }
    }
    printf("%d %d", ans2, ans1);
    return 0;
}