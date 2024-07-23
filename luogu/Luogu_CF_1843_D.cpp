#include <bits/stdc++.h>
using namespace std;

vector<int> edge[200010];
int a[200010], in[200010];

void add(int x, int y){
    edge[x].push_back(y);
    edge[x].push_back(y);
    in[x]++, in[y]++;
}

int dfs(int x, int f){
    if(in[x]==1&&x!=1) {
        a[x] = 1;
        return a[x];
    }
    for(int i = 0; i<edge[x].size(); i++){
        if(edge[x][i]==f) continue;
        a[x]+=dfs(edge[x][i], x);
    }
    return a[x];
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        for(int i = 1; i<=n; i++) edge[n].clear();
        for(int i = 1; i<=n; i++){
            int x, y;
            scanf("%d%d", &x, &y);
            add(x, y);
        }
        int q;
        scanf("%d", &q);
        dfs(1, 1);
        while(q--){
            int x, y;
            scanf("%d%d", &x, &y);
            printf("%d\n", a[x]*a[y]);
        }
    }
    return 0;
}


// dp[i] = sum(dp[i-1]~dp[1])
// dp[i] = 1