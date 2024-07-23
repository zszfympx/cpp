#include<bits/stdc++.h>
using namespace std;

int bcj[5010];

int Find(int x){
    if(bcj[x]!=x) bcj[x]=Find(bcj[x]);
    return bcj[x];
}

void Merge(int x, int y){
    x=Find(x), y = Find(y);
    if(x!=y) bcj[x] = bcj[y];
}

int main(){
    int n,m,p;
    scanf("%d%d",&n,&m);
    for(int i = 1; i<=n; i++) bcj[i] = i;
    while(m--){
        int x, y;
        scanf("%d%d", &x, &y);
        Merge(x, y);
    }
    scanf("%d", &p);
    while(p--){
        int x, y;
        scanf("%d%d", &x, &y);
        if(Find(x)==Find(y)){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}