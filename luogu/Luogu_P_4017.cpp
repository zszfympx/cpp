// 0pts -> 2WA 8MLE (TODO: toposort)
#include<bits/stdc++.h>
#include <vector>
using namespace std;

typedef pair<int, int> PII;

vector<int> G[500010];
int in[5010], out[5010];
queue<PII> q;

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i<m; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        in[b]++, out[a]++;
        G[a].push_back(b);
    }
    for(int i = 1; i<=n; i++){
        if(in[i]==0){
            q.push({i, 1});
        }
    }
    int ans = 0;
    while(!q.empty()){
        PII t = q.front();
        q.pop();
        if(out[t.first]==0){
            ans = max(ans, t.second);
            continue;
        }
        for(int i:G[t.first]){
            q.push({i, t.second+1});
        }
    }
    printf("%d", ans);
    return 0;
}