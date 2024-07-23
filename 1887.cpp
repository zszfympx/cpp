#include<bits/stdc++.h>
using namespace std;

const int maxn = 101;

struct edge{
    int v, w;
};

struct node{
    int dis, u;
    bool operator>(const node& a)const{
        return dis>a.dis;
    }
};

vector<edge> e[maxn];
int dis[maxn], vis[maxn];
priority_queue<node, vector<node>, greater<node>> q;

void solve(int n, int s){
    memset(dis, 63, sizeof dis);
    dis[s] = 0;
    q.push({n, s});
    while(!q.empty()){
        int u = q.top().u;
        q.pop();
        if(vis[u]) continue;
        vis[u] = 1;
        for(auto ed:e[u]){
            int v = ed.v, w = ed.w;
            if(dis[v]>dis[u]+w){
                dis[v] = dis[u]+w;
                q.push({dis[v], v});
            }
        }
    }
}

int main(){
    int t, c, ts, te;
    scanf("%d%d%d%d", &t, &c, &ts, &te);
    for(int i = 0; i<c; i++){
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        e[a].push_back({b, c});
        e[b].push_back({a, c});
    }
    solve(ts, te);
    printf("%d", dis[ts]);
    return 0;
}