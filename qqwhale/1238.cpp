#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int bcj[1010];
struct node{
    int x, y, z;
};
int Find(int x){
    if(bcj[x]!=x) bcj[x]=Find(bcj[x]);
    return bcj[x];
}

void Merge(int x, int y){
    x=Find(x), y = Find(y);
    if(x!=y) bcj[x] = bcj[y];
}

double getDist(int x1, int x2, int y1, int y2, int z1, int z2){
    return sqrt(pow(x1-x2, 2)+pow(y1-y2, 2)+pow(z1-z2, 2));
}
int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n, h, r;
        scanf("%d%d%d", &n, &h, &r);
        vector<int> _h[1010];
        node cir[1010];
        for(int i = 1; i<=n; i++) bcj[i] = i;
        for(int i = 1; i<=n; i++){
            scanf("%d%d%d", &cir[i].x, &cir[i].y, &cir[i].z);
            _h[cir[i].z].push_back(i);
        } 
        sort(cir+1, cir+1+n, [](const node &a, const node &b){return a.z<b.z;});
        for(int i = 1; i<=n; i++){
            if(cir[i].z==0) continue; 
            for(int j = 1; j<=_h[cir[i].z].back(); j++){
                if(getDist(cir[i].x, cir[j].x, cir[i].y, cir[j].y, cir[i].z, cir[j].z)<=2*r){
                    Merge(j, i);
                }
            }
        }
        if(_h[h].empty()||_h[0].empty()){ printf("No\n"); continue;}
        for(int i:_h[h]){
            int x = Find(i);
            for(int j:_h[0]) if(x==j) {printf("Yes\n"); continue;}
        }
        printf("No\n");
    }
}