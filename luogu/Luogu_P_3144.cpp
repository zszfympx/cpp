#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
const int maxn = 100010;
int bcj[maxn], book[maxn], a[maxn], fr[maxn], to[maxn], ans[maxn];

int Find(int x){
    if(bcj[x]!=x) bcj[x]=Find(bcj[x]);
    return bcj[x];
}

void Merge(int x, int y){
    x=Find(x), y = Find(y);
    if(x!=y) bcj[x] = bcj[y];
}

int main(){
    memset(a, 0, sizeof a);
    memset(ans, 0,sizeof ans);
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=n; i++) bcj[i] = i;
    for(int i = 1; i<=m; i++){
        int u, v;
        scanf("%d%d", &u, &v);
        fr[i] = v;
        to[i] = u;
    }
    for(int i = 1; i<=n; i++){
        scanf("%d", book+i);
        a[book[i]] = 1;
    }
    for(int i = 1; i<=m; i++){
        if(a[fr[i]]==0&&a[to[i]]){
            Merge(fr[i], to[i]);
        }
    }
    for(int i = n; i>0; i--){
        a[book[i]] = 0;
        for(int j = 1; j<=m; j++){
            if(a[fr[j]]==0&&a[to[j]]==0){
                Merge(fr[j], to[j]);
            }
        }
        for(int j = 1; j<=n; j++){
            if(Find(j)==j&&a[j]==0){
                ans[i]++;
            }
        }
    }
    for(int i = 1; i<=n-1; i++){
        if(ans[i]==1) printf("YES\n");
        else printf("NO\n");
    }
    printf("YES\n");
    return 0;
}