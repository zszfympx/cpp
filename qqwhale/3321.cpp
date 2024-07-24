#include<bits/stdc++.h>
using namespace std;

int G[210][210];

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(i==j) G[i][j] = 1e9;
            else G[i][j] = 0;
        }
    }
    for(int i = 0; i<m; i++){
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        G[x][y] = z;
    }
    for(int k = 1; k<=n; k++){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
            }
        }
    }
}