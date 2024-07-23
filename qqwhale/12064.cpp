#include<bits/stdc++.h>
#include<bits/extc++.h>
#include <cstdio>
using namespace std;
using namespace __gnu_cxx;
using namespace __gnu_pbds;

typedef pair<int, int> PII;

int n, m;
int G[1010][1010];
queue<PII> q;
int dx[4]={0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
int book[1010][1010];

int bfs(int x, int y){
    int res = 0;
    while(!q.empty()) q.pop();
    q.push({x, y});
    book[x][y] = 1;
    while(!q.empty()){
        res++;
        PII t = q.front();
        printf("%d %d\n", t.first, t.second);
        q.pop();
        for(int k = 0; k<4; k++){
            int xx = t.first+dx[k], yy = t.second+dy[k];
            if(0<xx&&xx<=n&&0<yy&&yy<=n&&G[xx][yy]!=G[t.first][t.second]&&book[xx][yy]==0){
                book[xx][yy] = 1;
                q.push({xx, yy});
            }
        }
    }
    return res;
}

int main(){
    char c;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=n; i++){
        getchar();
        for(int j = 1; j<=n; j++){
            c = getchar();
            G[i][j] = c=='+'?1:0;
        }
    }
    while(m--){
        int sx, sy;
        scanf("%d%d", &sx, &sy);
        memset(book, 0, sizeof book);
        printf("%d\n", bfs(sx, sy));
    }
    return 0;
}