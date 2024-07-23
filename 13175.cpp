#include<bits/stdc++.h>
using namespace std;
const int N=2e3+10, mod=1e9+7;
int n, m, a[N], b[N], f[N][N];
int main(){
    cin>>n>>m;
    for(int i = 1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 1; i<=m; i++){
        scanf("%d", &b[i]);
    }
    for(int i = 0 ;i<=m ; i++){
        f[0][i] = 1;
    }for(int i = 0; i<=n; i++){
        f[i][0] = 1;
    }for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(a[i]==b[j])f[i][j] = (f[i-1][j]+f[i][j-1])%mod;
            else f[i][j] = (f[i-1][j]+f[i][j-1]-f[i-1][j-1])%mod;
        }
    }
    cout<<f[n][m]%mod;
    return 0;
}