#include<bits/stdc++.h>
using namespace std;

int G[51][51];
int dx[4]={0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

int main(){
    int n, cnt = 1;
    scanf("%d", &n);
    int t = 0, x = 1, y = 1, num = 0;
    while(cnt<=n*n){
        G[x][y] = cnt;
        if(t==0){
            if(y+dy[t]>n-num){
                t=1;
            }
        }
        if(t==1){
            if(x+dx[t]>n-num){
                t=2;
            }
        }
        if(t==2){
            if(y+dy[t]<1-num){
                t = 3;
            }
        }
        if(t==3){
            if(x+dx[t]<1-num){
                t = 0;
                num++;
            }
        }
        x+=dx[t], y+=dy[t];
        cnt++;
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            printf("%d ", G[i][j]);
        }
        printf("\n");
    }
    return 0;
}
