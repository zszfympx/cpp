#include<bits/stdc++.h>
using namespace std;

typedef pair<int,  int> PII;

int G[110][110], book[110][110];
int n, m;
queue<PII> q;
int ans;

int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0};

void dfs(int x, int y){
    for(int k = 0; k<4; k++){
        int xx = x+dx[k], yy = y+dy[k];
        if(0<xx&&xx<=n&&0<yy&&yy<=m&&G[xx][yy]==0&&!book[xx][yy]){
            book[xx][yy] = 1;
            dfs(xx, yy);
        }
    }
}

int main(){
    char c;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
           cin>>c;
           G[i][j] = c=='X'?1:0; 
        }
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(G[i][j]==0&&book[i][j]==0){
                ans++;
                book[i][j] = 1;
                dfs(i, j);
            }
        }
    }
    printf("%d", ans);
    return 0;
}