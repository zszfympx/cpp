#include<bits/stdc++.h>
using namespace std;

vector<int> vis, he, ne, to;

void add(int u, int v){
    ne.push_back(he[u]);
    he[u] = to.size();
    to.push_back(v);
}

void dfs(int u){
    if(vis[u]) return;
    vis[u] = 1;
    for(int i = he[u]; ~i; i = ne[i]) dfs(to[i]);
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    vis.resize(n+1, false);
    he.resize(n+1, -1);
    for(int i = 0; i<m; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        add(a, b);
    }
    dfs(1);int ans = 0;
    for(int i = 1; i<=n; i++){
        if(vis[i]) ans++;
    }
    printf("%d", ans);
}