#include<bits/stdc++.h>
using namespace std;

int n, m, k, a[55][55], book[55][55][20][20], ans;

int dfs(int x, int y, int u, int v){
    if(x>n||y>n) return 0;
    if(book[x][y][u+1][v]!=0) return book[x][y][u+1][v];
    int tmp = 0;
    if(x==n&&y==m){
        if(v==)
    }
}

int main(){
    scanf("%d%d%d", &n, &m, &k);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("%d", dfs(1, 1, -1, 0));
    return 0;
}