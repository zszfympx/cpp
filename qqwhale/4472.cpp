#include<bits/stdc++.h>
using namespace std;

struct node{
    int x, y, a;
};

int G[51][51], book[51][51];
bool flag = false;
queue<node> q;
int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0};

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            scanf("%d", &G[i][j]);
        }
    }
    q.push({1, 1, 0});
    book[1][1] = 1;
    while(!q.empty()&&!flag){
        node t = q.front();q.pop();
        if(G[t.x][t.y]==2){
            printf("%d", t.a);
            return 0;
        }
        for(int k=0; k<4; k++){
            int xx = t.x+dx[k], yy = t.y+dy[k];
            if(0<xx&&xx<=n&&0<yy&&yy<=n&&G[xx][yy]==0&&book[xx][yy]==0){
                book[xx][yy] = 1;
                q.push({xx, yy, t.a+1});
            }
        }
    }
}