#include<bits/stdc++.h>
using namespace std;

vector<int> edge[110];
int flag = 0, book[110];

void dfs(int x, int y){
    if(flag) return;
    for(int i:edge[x]){
        if(!book[i]){
            if(i==y){ flag = true; return;}
            book[i]=1;
            dfs(i, y);
        }
    }
}

int main(){
    int n, m, x, y;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=m; i++){
        scanf("%d%d", &x, &y);
        edge[x].push_back(y);
    }
    for(int i = 1; i<=n; i++){
        memset(book, 0, sizeof book);
        flag = false;
        dfs(i, i);
        if(flag) {printf("circle"); return 0;}
    }
    printf("no circle");
    return 0;
}