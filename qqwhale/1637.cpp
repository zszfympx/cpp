#include<bits/stdc++.h>
using namespace std;

vector<int> edge[1010];
int book[110];
queue<int> q;

void dfs(int x){
    sort(edge[x].begin(), edge[x].end());
    for(int i:edge[x]){
        if(book[i]==0){
        printf("-%d", i);
        book[i] = 1;
        dfs(i);
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
    printf("1");
    book[1] = 1;
    dfs(1);
    printf("\n1");
    memset(book, 0, sizeof book);
    book[1] = 1;
    q.push(1);
    while(!q.empty()){
        int t = q.front();q.pop();
        for(int i:edge[t]){
            if(book[i]==0){
            printf("-%d", i);
            book[i] = 1;
            q.push(i);
            }
        }
    }
    return 0;
}