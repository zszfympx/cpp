#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        char G[55][55];
        scanf("%d", &n);
        for(int i = 1; i<=n; i ++){
            for(int j = 1; j<=n; j++){
                cin>>G[i][j];
            }
        }
        bool flag = false;
        for(int i = 1; i<n; i++){
            for(int j = 1; j<n; j++){
                if(G[i][j]=='1'&&G[i][j+1]=='0'&&G[i+1][j]=='0'){
                    flag = true;
                }
            }
        }
        if(flag) printf("NO\n");
        else printf("YES\n");
    }
}