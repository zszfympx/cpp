#include<bits/stdc++.h>
using namespace std;

vector<int> G[100010];
int vis[100010];

void dfs(int u, int w){
    if(vis[u]) return;
    vis[u] = w;
    for(int i:G[u]){
        dfs(i, w);
    }
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i<m; i++){
        int u, v;
        scanf("%d%d", &u, &v);
        G[v].push_back(u);
    }
    for(int i = n; i; i--) dfs(i, i);
    for(int i = 1; i<=n; i++) printf("%d ", vis[i]);
    return 0;
}