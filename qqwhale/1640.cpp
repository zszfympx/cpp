#include<bits/stdc++.h>
using namespace std;

struct edge{
    int to, w;
};

vector<edge> edge[1010];
int dis[1010], book[1010];

int n, m, x, y, z;

int main(){
    scanf("%d%d", &n, &m);
    for(int i = 0; i<m; i++){
        scanf("%d%d%d", &x, &y, &z);
        edge[x].push_back({y, z});
        edge[y].push_back({x, z});
    }
    memset(dis, 63, sizeof dis);
    int s, e;
    scanf("%d%d", &s, &e);
    dis[s] = 0;
    for(int i = 1; i<=n; i++){
        int t = -1;
        for(int j = 1; j<=n; j++){
            if(!book[j]&&(t==-1||dis[j]<dis[t])){
                t = j;
            }
        }
        book[t] = 1;
        for(int i = 0; i< edge[t].size(); i++){
            int to = edge[t][i].to;
            int len1 = edge[t][1].w;
            if(dis[to]>dis[t]+len1){
                dis[to]=dis[t]+len1;
            }
        }
    }
    printf("%d", dis[e]);
}