#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int t, n, a[N], f[N], f1[N], f2[N];
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i = 1; i<=n; i++){
            scanf("%d", &a[i]);
        }
        int mi = 1e8, ma = -1e8;
        memset(f1, 0, sizeof f1);
        memset(f2,0,sizeof f2);
        for(int i = 1; i<=n; i++){
            mi = min(mi, a[i]);
            f1[i] = max(f[i-1], a[i]-mi);
        }
        for(int i = n; i>0; i--){
            ma = max(ma, a[i]);
            f2[i]=max(f2[i+1], ma-a[i]);
        }
        int ans = 1e8;
        for(int i = 1; i<=n; i++){
            ans=max(ans, f1[i]+f2[i]);
        }
        printf("%d", ans);
    }
}