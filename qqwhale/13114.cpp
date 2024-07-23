#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn = 1e6+100;
int a[maxn], b[maxn], c[maxn];

signed main(){
    int n, m;
    scanf("%lld%lld", &n,&m);
    for(int i = 1; i<=m; i++){
        int l, r, k;
        scanf("%lld%lld%lld", &l, &r, &k);
        if(k==1){
            a[l]++;
            a[r+1]--;
        }else if(k==2){
            b[l]++;
            b[r+1]--;
        }else{
            c[i]++;
            c[r+1]--;
        }
    }
    for(int i = 1; i<=n; i++){
    	a[i]+=a[i-1];
        b[i]+=b[i-1];
        c[i]+=c[i-1];
    }
    int ans = 0;
    for(int i = 1; i<=n; i++){
        if(a[i]&&b[i]&&!c[i]) ans++;
    }
    printf("%lld", ans);
    return 0;
}