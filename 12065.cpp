#include<bits/stdc++.h>
using namespace std;

int G[510][510];
int book[510][510];
int dx[4]={0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
int n, m, a, b, x, y;

struct node{
    int x, y, w;
};

queue<node> q;

void bfs(int x, int y){
    while(!q.empty()) q.pop();
    book[x][y] = 1;
    q.push({x, y, 0});
    while(!q.empty()){
        node t = q.front();q.pop();
        if(G[t.x][t.y]==-1){
            G[t.x][t.y] = t.w;
        }else{
            if(G[t.x][t.y]<t.w) continue;
            else G[t.x][t.y]=t.w;
        }
        for(int k = 0; k<4; k++){
            int xx = t.x+dx[k], yy = t.y+dy[k];
            if(0<xx&&xx<=n&&0<yy&&yy<=m&&book[xx][yy]==0){
                book[xx][yy] = 1;
                q.push({xx, yy, t.w+1});
            }
        }
    }
}

int main(){
    scanf("%d%d%d%d", &n, &m, &a, &b);
    memset(G, -1, sizeof G);
    for(int i = 0; i<a; i++){
        scanf("%d%d", &x, &y);
        memset(book, 0, sizeof book);
        G[x][y] = 0;
        bfs(x, y);
    }
    while(b--){
        scanf("%d%d", &x, &y);
        printf("%d\n", G[x][y]);
    }
    return 0;
}