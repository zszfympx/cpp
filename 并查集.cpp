#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e3+10;
int bcj[maxn];

int Find(int x){
    if(bcj[x]!=-1) return bcj[x]=Find(bcj[x]);
    return x;
}

void Merge(int x, int y){
    bcj[x] = y;
}

int main(){
    int n, m, x, y;
    scanf("%d%d", &n, &m);
    memset(bcj, -1, sizeof bcj);
    for(int i = 0 ; i<m; i++){
        scanf("%d%d", &x, &y);
        Merge(x, y);
    }
    set<int> s;
    for(int i = 0; i<n; i++){
        s.insert(Find(i));
    }
    printf("%d", s.size());
    return 0;
}