#include<bits/stdc++.h>
using namespace std;

int G[210][210];

int main(){
    int n, m, x, y, z;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(i==j) G[i][j] = 0;
            else G[i][j] = 1e9;
        }
    }
    for(int i = 0; i < m; i++){
        scanf("%d%d%d", &x, &y, &z);
        G[x][y] = min(G[x][y], z);
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
            }
        }
    }
    scanf("%d", &x);
    while(x--){
        scanf("%d%d", &y, &z);
        if(G[y][z] > 1e9/2) printf("impossible\n");
        else printf("%d\n", G[y][z]);
    }
    scanf("%d", &x);
    while(x--){
        scanf("%d%d", &y, &z);
        if(G[y][z] > 1e9/2) printf("impossible\n");
        else printf("%d\n", G[y][z]);
    }
    return 0;
}
