#include<bits/stdc++.h>
using namespace std;

struct node{
    int from, to, w;
}a[200010];

int bcj[200010];


int Find(int x){
    if(bcj[x]!=x) bcj[x]=Find(bcj[x]);
    return bcj[x];
}

void Merge(int x, int y){
    x=Find(x), y = Find(y);
    if(x!=y) bcj[x] = bcj[y];
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=n; i++) bcj[i] = i;
    for(int i = 1; i<=m; i++){
        int x, y, t;
        scanf("%d%d%d", &x, &y, &t);
        a[i].from = x;
        a[i].to = y;
        a[i].w = t;
    }
    sort(a+1, a+1+m, [](const node &x, const node &y){return x.w<y.w;});
    for(int i = 1; i<=m; i++){
        int x = Find(a[i].from), y = Find(a[i].to);
        if(x!=y) bcj[x]=y, n--;
        if(n==1){
            printf("%d", a[i].w);
            return 0;
        }
    }
    printf("-1");
    return 0;
}