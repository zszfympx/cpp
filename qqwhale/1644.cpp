#include<bits/stdc++.h>
using namespace std;

vector<int> edge[110];
int book[110];
queue<int> q;
bool flag = false;

void bfs(int x, int y){
    book[x] = 1;
    q.push(x);
    while(!q.empty()){
        int t = q.front();
        q.pop();
        if(t==y) { flag = true; return; }
        for(int i : edge[t]){
            if(book[i]==0){
                book[i] = 1;
                q.push(i);
            }
        }

    }
}

int main(){
    int n, m, x, y;
    scanf("%d%d", &n, &m);
    for(int i = 0; i<m; i++){
        scanf("%d%d", &x, &y);
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    for(int i = 1; i<=n; i++){
        if(book[i]==0){
            bfs(i, i);
            if(flag){ printf("circle"); return 0;}
        }
    }
    printf("no circle");
    return 0;
}