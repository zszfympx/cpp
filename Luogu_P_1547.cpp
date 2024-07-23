#include <bits/stdc++.h>
using namespace std;

#define maxn 10010

struct node {
    int s, e, w;
    bool operator<(const node &a) const { return this->w < a.w; }
} G[maxn];

int bcj[maxn];

int Find(int k) {
    if (bcj[k] == k)
        return k;
    else
        return bcj[k] = Find(bcj[k]);
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int cnt = 0;

    for (int i = 0; i < m; i++) {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        G[cnt].s = x;
        G[cnt].e = y;
        G[cnt++].w = z; 
    }

    sort(G, G + cnt);
    int ans = 0, tot = 0;

    for (int i = 1; i <= n; i++) 
        bcj[i] = i; 

    for (int i = 0; i < cnt; i++) { 
        if (Find(G[i].s) != Find(G[i].e)) {
            ans = max(ans, G[i].w);
            bcj[Find(G[i].s)] = Find(G[i].e);
            tot++;
            if (tot == n - 1) break;
        }
    }

    printf("%d\n", ans);
    return 0;
}