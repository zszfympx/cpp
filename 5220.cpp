#include<bits/stdc++.h>
using namespace std;

char cube[6][8]={
    "..+---+",
    "./   /|",
    "+---+ |",
    "|   | +",
    "|   |/.",
    "+---+.."
};

char G[55][55];
int cubes[55][55];

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int a=4*n+3*m+1, b=0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            scanf("%d", &cubes[i][j]);
            b = max(b, cubes[i][j]*3+2*(m-i+1)+1);
        }
    }
    for(int i = 1; i<=a; i++){
        for(int j = 1; j<=b; j++){
            cube[i][j] = '.';
        }
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            int x = b-2*(n-i);
            int y = 2*(n-i)+4*(j-1)+1;
            while(cubes[i][j]--){
                for(int u = 0; u<6; u++){
                    for(int v = 0; v<7; v++){
                        if(cube[6-i-1][j]!='.')
                            G[x-u][y+j]=cube[6-u-1][v];
                    }
                }
                x-=3;
            }
        }
    }
    for(int i = 1; i<=a; i++){
        for(int j = 1; j<=b; j++){
            printf("%c", G[i][j]);
        }
        printf("\n");
    }
    return 0;
}