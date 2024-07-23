#include<bits/stdc++.h>
using namespace std;

int bcj[100010];

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
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        if(x==1){
            Merge(y, z);
        }else{
            if(Find(y)!=Find(z)){
                printf("N\n");
            }else{
                printf("Y\n");
            }
        }
    }
    return 0;
}