#include <bits/stdc++.h>
using namespace std;

vector<int> vis, G[101];

void add(int u, int v){
    G[u].push_back(v);
    G[v].push_back(u);
}

void dfs(int u){
    if(vis[u]) return;
    vis[u] = 1;
    for(int i:G[u]){
        dfs(i);
    }
}

int main(){
    int n;
    while(cin >> n && n != 0){
        vis.assign(n + 1, 0);
        for(int i = 1; i<=n; i++) G[i].clear();
        int k;

        while(cin >> k && k != 0){
            string s;
            getline(cin, s);
            stringstream ss(s.substr(2));
            int u;

            while(ss >> u){
                add(u, k);
            }
        }

        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(vis[i] == 0){
                dfs(i);
                ans++;
            }
        }
        printf("%d\n", ans-1);
    }
    return 0;
}
