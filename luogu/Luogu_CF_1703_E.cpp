#include<bits/stdc++.h>
using namespace std;

char G[101][101];

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        memset(G, 0x3f, sizeof G);
        int n;
        scanf("%d", &n);
        getchar();
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                scanf("%c", &G[i][j]);   
            }
            getchar();
        }
        int ans = 0;
        if(n%2==0){
            for(int i = 1; i<=n/2; i++){
                for(int j = 1; j<=n/2; j++){
                    int xx=i-1;int yy=j-1;
                    int x_1=1+yy,y_1=n-xx;
                    int x_2=n-xx,y_2=n-yy;
                    int x_3=n-yy,y_3=1+xx;
                    int sum=G[i][j]+G[x_1][y_1]+G[x_2][y_2]+G[x_3][y_3]-4*'0';
                    if(sum==1||sum==3)ans+=1;
                    if(sum==2)ans+=2;
                }
            }
        }else{
            for(int i = 1; i<=n/2; i++){
                for(int j = 1; j<=n/2+1; j++){
                    int xx=i-1;int yy=j-1;
                    int x_1=1+yy,y_1=n-xx;
                    int x_2=n-xx,y_2=n-yy;
                    int x_3=n-yy,y_3=1+xx;
                    int sum=G[i][j]+G[x_1][y_1]+G[x_2][y_2]+G[x_3][y_3]-4*'0';
                    if(sum==1||sum==3)ans+=1;
                    if(sum==2)ans+=2;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}