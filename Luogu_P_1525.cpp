#include<bits/stdc++.h>
using namespace std;

const int maxn = 200010;

struct node{
    int s, e, w;
}edge[maxn];

int bcj[maxn], a[maxn];

int Find(int x){
    if(bcj[x]!=x) return bcj[x] = Find(bcj[x]);
    return x;
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=m; i++){
        scanf("%d%d%d", &edge[i].s, &edge[i].e, &edge[i].w);
    }
    for(int i = 1; i<=n; i++){
        bcj[i] = i;
    }
    sort(edge+1, edge+1+m, [](const node &a, const node &b){
        return a.w>b.w;
    });
    for(int i = 1; i<=m; i++){
        int u = Find(edge[i].s), v = Find(edge[i].e);
        if(u==v){
            printf("%d", edge[i].w);
            return 0;
        }
        if(!a[edge[i].s]) a[edge[i].s] = edge[i].e;
        else bcj[Find(a[edge[i].s])]=Find(edge[i].e);
        if(!a[edge[i].e]) a[edge[i].e] = edge[i].s;
        else bcj[Find(a[edge[i].e])]=Find(edge[i].s);
    }
    printf("0");
    return 0;
}