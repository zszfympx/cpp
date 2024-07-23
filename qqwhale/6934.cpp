#include<bits/stdc++.h>
using namespace std;

int dx[4] = {0 , 1, 0, -1}, dy[4] = {-1, 0, 1, 0};
int book[15][15];
int n, ans_x, ans_y;

void dfs(int x, int y){
    for(int k = 0; k<4; k++){
        int xx = x+dx[k], yy = y+dy[k];
        if(0<xx&&xx<=n&&0<yy&&yy<=n&&book[xx][yy]==0){
            book[xx][yy] = 1;
            ans_x=xx, ans_y = yy;
            dfs(xx, yy);
        }
    }
}

int main(){
    scanf("%d", &n);
    int sx, sy;
    scanf("%d%d", &sx, &sy);
    book[sx][sy] = 1;
    dfs(sx, sy);
    printf("%d %d", ans_y, ans_x);
    return 0;
}