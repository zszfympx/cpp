#include<bits/stdc++.h>
using namespace std;

int G[11][11], book[11][11];
bool flag = false;
int n;
int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0};

void dfs(int x, int y){
    if(x==n&&y==n){ flag = true; return; }
    for(int k=0; k<4; k++){
        int xx = x+dx[k], yy = y+dy[k];
        if(0<xx&&xx<=n&&0<yy&&yy<=n&&G[xx][yy]==0&&!book[xx][yy]){
            book[xx][yy] = 1;
            dfs(xx, yy);
        }
    }
    return;
}


int main(){
    char c;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cin>>c;
            G[i][j] = c=='.'?0:1;
        }
    }
    dfs(1, 1);
    if(flag) printf("YES");
    else printf("NO");
}