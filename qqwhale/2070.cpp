#include<bits/stdc++.h>
using namespace std;

const int maxn = 101;

struct node{
    int to, re;
    bool vis;

    bool operator<(const node& a) const{
        return to<a.to;
    }
};

vector<node> edge[maxn];
int cnt[maxn];

stack<int> ans;

void solve(int x){
    for(int i = cnt[x]; i<edge[x].size();){
        if(edge[x][i].vis){
            node t = edge[x][i];
            edge[x][i].vis = 1;
            edge[t.to][t.re].vis = 0;
            i++;
            solve(t.to);
        }else {
            i++;
        }
    }
    ans.push(x);
}

int in[maxn], re[maxn];

void add(int u, int v){
    edge[u].push_back({v, 1, 0});
    edge[v].push_back({u, 1, 0});
    in[u]++, in[v]++;
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=m; i++){
        int a, b;
        scanf("%d%d", &a, &b);
    }
    for(int i = 1; i<=n; i++){
        if(!edge[i].empty()){
            sort(edge[i].begin(), edge[i].end());
        }
    }
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<edge[i].size(); j++){
            edge[i][j].re = re[edge[i][j].to]++;
        }
    }
    solve(1);
    while(!ans.empty()){
        printf("%d ", ans.top());
        ans.pop();
    }
    return 0;
}