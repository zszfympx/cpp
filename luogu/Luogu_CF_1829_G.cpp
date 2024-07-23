#include<bits/stdc++.h>
using namespace std;

#define lld long long

lld f[4000001], a[2010][2010];

int main(){
    lld t, cnt = 1;
    scanf("%lld", &t);
    while(t--){
        lld n;
        scanf("%lld", &n);
        if(f[n]!=0) {printf("%lld\n", f[n]); continue;}
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
                if(a[i][j]!=0) continue;
                if(i==1){
                    a[i][j] = 1;
                }else{
                    a[i][j] = cnt*cnt+a[i-1][j-1]+a[i-1][j]-a[i-2][j-1];
                }
                f[cnt++] = a[i][j];
            }
        }
        printf("%lld\n", f[n]);
    }
}