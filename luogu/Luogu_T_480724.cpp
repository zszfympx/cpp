#include<bits/stdc++.h>
using namespace std;

int n, m;
int main(){
    int ans = 0;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            int x;
            scanf("%d", &x);
            if(i%3==2&&j%3==2){
                ans+=x;
            }
        }
    }
    printf("%d", ans);
    return 0;
}