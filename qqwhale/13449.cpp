#include<bits/stdc++.h>
using namespace std;

int bcj[100010], dis[100010];

int Find(int x){
    if(bcj[x]!=x) return bcj[x] = Find(bcj[x]);
    return x;
}

void Merge(int x, int y, int z){
    int xx = Find(x), yy = Find(y);
    if(xx!=yy) {
        bcj[x] = y;
        dis[x] = z;
    }
}

int Dis(int x, int y){
    int xx = Find(x), yy = Find(y);
    int res = 0;
    if(xx==yy){
        while(true){
            res+=dis[x];
            x = bcj[x];
            if(bcj[x]==x) break;
        }
        while(true){
            res-=dis[y];
            y = bcj[y];
            if(bcj[y]==y) break;
        }
        return res;
    }else{
        return -1;
    }
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i<n; i++) bcj[i] = i;
    while(m--){
        int op;
        scanf("%d", &op);
        if(op==0){
            int x, y, z;
            scanf("%d%d%d", &x, &y, &z);
            Merge(x, y, z);
        }else{
            int x, y;
            scanf("%d%d", &x, &y);
            if(Dis(y, x)==-1) printf("?\n");
            else printf("%d", Dis(y, x));
        }
    }
}