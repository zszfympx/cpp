#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int> a;
vector<int> b;

signed main(){
    int t;
    scanf("%lld", &t);
    while(t--){
        a.clear();
        b.clear();
        int n, k;
        scanf("%lld%lld", &n, &k);
        a.resize(n+1);
        b.resize(n+1);
        for(int i = 1; i<=n; i++){
            scanf("%lld", &b[i]);
        }
        for(int i = 1; i<=n; i++){
            int c;
            scanf("%lld", &c);
            c = abs(c);
            a[c]+=b[i];
        }
        int sum = 0;
        bool flag = true;
        for(int i = 1; i<=n; i++){
            sum+=k-a[i];
            if(sum>=0) {
                flag = true;
            }else{
                flag = false;
                break;
            }
        }
        puts(flag?"YES":"NO");
    }
    return 0;
}