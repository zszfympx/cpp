#include<bits/stdc++.h>
using namespace std;

int bcj[1010];

int Find(int x){
    if(bcj[x]!=x) bcj[x]=Find(bcj[x]);
    return bcj[x];
}

void Merge(int x, int y){
    x=Find(x), y = Find(y);
    if(x!=y) bcj[x] = bcj[y];
}

int main(){
    while(true){
        int n, m;
        scanf("%d", &n);
        if(n==0) return 0;
        scanf("%d", &m);
        for(int i = 1; i<=n; i++) bcj[i] = i;
        while(m--){
            int x, y;
            scanf("%d%d", &x, &y);
            Merge(x, y);
        }
        set<int> s;
        for(int i = 1; i<=n; i++){
            Find(i);
            s.insert(bcj[i]);
        }
        printf("%d\n", s.size()-1);
    }
}