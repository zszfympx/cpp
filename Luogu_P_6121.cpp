#include<bits/stdc++.h>
using namespace std;
const int maxn = 200010;

int n, m;
int ne[maxn], he[maxn], bcj[maxn], a[maxn], book[maxn], ans[maxn];
int cnt;

struct node{
    int s, e;
}edges[maxn];

void add(int x, int y){
    edges[++cnt].s = he[x];
    edges[cnt].e = y;
    he[x] = cnt;
}

int Find(int x){
    if(bcj[x]!=x) return bcj[x] = Find(bcj[x]);
    return x;
}

int main(){
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=n; i++) {
        bcj[i] = i;
    }
    for(int i = 1; i<=m; i++){
        int x, y;
        scanf("%d%d", &x, &y);
        add(x, y);
        add(y, x);
    }
    for(int i = 1; i<=n; i++){
        scanf("%d", &a[i]);
        book[a[i]] = 1;
    }
    int tot = 0;
    for(int i = n; i>=1; i--){
        tot++;
        int t = a[i];
        for(int j = he[t];j; j=edges[j].s){
            int v = edges[j].e;
            if(Find(t)!=Find(v)&&!book[v]) bcj[Find(t)] = Find(v), tot--;
        }
        book[t] = 0;
        ans[i] = tot;
    }
    for(int i = 1; i<=n; i++){
        if(ans[i]==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}