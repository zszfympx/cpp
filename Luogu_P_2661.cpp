#include<bits/stdc++.h>
using namespace std;

#define maxn 200010

int bcj[maxn], book[maxn], ans = INT_MAX, vis[maxn], f[maxn];

int Find(int x){
    if(bcj[x]!=x) return bcj[x]=Find(bcj[x]);
    return x;
}

int Merge(int x, int y){
    if(f[y]!=x){
        return Merge(x, f[y])+1;
    }else{
        return 1;
    }
}

void dfs(int x){
    if(vis[x]){
        ans = min(ans, Merge(x, x));
        return;
    }
    vis[x] = 1;
    dfs(bcj[x]);
    vis[x] = 0;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++) bcj[i] = i;
    for(int i = 1; i<=n; i++){
        scanf("%d", &f[i]);
        int tx = Find(i);
        int ty = Find(f[i]);
        if(bcj[tx]!=bcj[ty])bcj[tx] = ty;
    }
    for(int i = 1; i<=n; i++){
        if(!book[Find(i)]){
            dfs(i);
            book[Find(i)] = 1;
        }
    }
    printf("%d", ans);
    return 0;
}