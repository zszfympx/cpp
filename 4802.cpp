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
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=n; i++) bcj[i] = i;
    for(int i = 0;i<m; i++){
        int x, y;
        scanf("%d%d", &x, &y);
        Merge(x, y);
    }
    set<int> s;
    for(int i = 1; i<=n; i++){
        s.insert(Find(i));
    }
    printf("%d", s.size());
    return 0;
}