#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

vector<int> edge[110];
queue<PII> q;
int book[110];
int n, m, x, y;

void bfs(){
    q.push({n, 1});
    while(!q.empty()){
        PII t = q.front();
        q.pop();
        for(int i:edge[t.first]){
            if(book[i]==0){
                book[i] = t.second;
                q.push({i, t.second+1});
            }
        }
    }
}

int main(){
    scanf("%d%d", &n, &m);
    for(int i = 0; i<m; i++){
        scanf("%d%d", &x, &y);
        edge[y].push_back(x);
        edge[x].push_back(y);
    }
    bfs();
    for(int i = 1; i<n; i++){
        printf("%d ", book[i]);
    }
    return 0;
}