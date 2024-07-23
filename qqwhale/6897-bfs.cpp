#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

int G[11][11], book[11][11];
bool flag = false;
int n;
int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0};
queue<PII> q;

int main(){
    char c;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cin>>c;
            G[i][j] = c=='.'?0:1;
        }
    }
    q.push({1, 1});
    while(!q.empty()&&!flag){
        PII t = q.front();
        q.pop();
        if(t.first==n&&t.second==n){
            flag = true;
        }
        for(int k = 0; k<4; k++){
            int xx = t.first+dx[k], yy = t.second+dy[k];
            if(0<xx&&xx<=n&&0<yy&&yy<=n&&!G[xx][yy]&&!book[xx][yy]){
                book[xx][yy] = 1;
                q.push({xx, yy});
            }
        }
    }
    if(flag) printf("YES");
    else printf("NO");
    return 0;
} 