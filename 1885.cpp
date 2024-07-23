#include <bits/stdc++.h>
using namespace std;

const int maxn = 101;

struct edge {
    int v, w;
};

struct node {
    int dis, u;
    bool operator>(const node& a) const {
        return dis > a.dis; // 为了保证小的距离优先
    }
};

vector<edge> e[maxn];
int dis[maxn], vis[maxn];
priority_queue<node, vector<node>, greater<node>> q;

void solve(int s) {
    memset(dis, 63, sizeof dis); 
    memset(vis, 0, sizeof vis); 
    dis[s] = 0; 
    q.push({0, s});

    while (!q.empty()) {
        int u = q.top().u;
        q.pop();
        if (vis[u]) continue;
        vis[u] = 1;
        for (const auto& ed : e[u]) {
            int v = ed.v, w = ed.w;
            if (dis[v] > dis[u] + w) {
                dis[v] = dis[u] + w;
                q.push({dis[v], v});
            }
        }
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=n; i++) dis[i] = INT_MAX;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        e[a].push_back({b, c});
        e[b].push_back({a, c});
    }
    
    solve(1); 

    int ans = 0;
    for (int i = 2; i <= n; i++) { 
        if (dis[i] < INT_MAX) { 
            ans = max(ans, dis[i]);
        }
    }
    printf("%d", ans); 
    return 0;
}
