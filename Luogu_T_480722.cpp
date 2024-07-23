#include<bits/stdc++.h>
using namespace std;

vector<int> G[110];
typedef pair<int, int> PII;
queue<PII> q;

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        int cnt; scanf("%d", &cnt);
        for(int j = 1; j<=cnt; j++){
            int x;
            scanf("%d", &x);
            G[i].push_back(x);
        }
    }
    for(int i = 1; i<=n; i++){
        while(!q.empty()) q.pop();
        int ans = 0;
        q.push({i, 0});
        int book[110] = {0};
        book[i] = 1;
        while(!q.empty()){
            PII t = q.front();
            q.pop();
            if(t.second>2) continue;
            if(t.first!=i) ans++;
            for(int k:G[t.first]){
                if(book[k]!=1){
                    book[k] = 1;
                    q.push({k, t.second+1});
                }
            }
        }
        printf("%d ", ans);
    }
    return 0;
}