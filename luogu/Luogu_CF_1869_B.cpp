#include<bits/stdc++.h>
using namespace std;
#define int long long

int x[200010], y[200010];
int n, k, a, b;
signed main(){
    int t;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld%lld%lld%lld", &n, &k, &a, &b);
        for(int i = 1; i<=n; i++){
            scanf("%lld%lld", &x[i], &y[i]);
        }
        int ans1 = 0x3ffffffff, ans2 = 0x3ffffffff;
        if(a<=k) ans1 = 0;
        else {
            for(int i = 1; i<=k; i++){
                ans1 = min(ans1, 
                abs(x[i]-x[a])+
                abs(y[i]-y[a]));
            }
        }
        if(b<=k) ans2 = 0;
        else {
            for(int i = 1; i<=k; i++){
                ans2 = min(ans2, 
                abs(x[i]-x[b])+
                abs(y[i]-y[b]));
            }
        }
        printf("%lld\n", min(ans1+ans2, 
        abs(x[a]-x[b])+
        abs(y[a]-y[b])));
    }
}