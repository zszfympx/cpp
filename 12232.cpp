#include<bits/stdc++.h>
#include <cstdio>
#include <cstring>
using namespace std;
#define maxn 25

int G[maxn][maxn];

int main(){
    int n;
    memset(G, 0, sizeof G);
    G[1][1] = 1;
    while(true){
        scanf("%d", &n);
        if(!n) return 0;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
                if(G[i][j]) {
                    cout<<G[i][j]<<' ';
                    continue;
                }
                G[i][j] = G[i-1][j-1]+G[i-1][j];
                cout<<G[i][j]<<' ';
            }
            putchar('\n');
        }
    }
}