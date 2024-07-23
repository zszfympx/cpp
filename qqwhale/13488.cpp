#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
unordered_map<lld, lld>ll;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        ll.clear();
    	lld k, n, sum = 0, ans = 0;
        scanf("%lld%lld", &k, &n);
        ll[0]=1;
    	for(int i=1;i<=n;i++){
        	lld a;
        	scanf("%lld", &a);
        	sum+=a;
        	lld mod=sum%k;
        	if(ll.find(mod)!=ll.end()){
                ans+=ll[mod];
                ll[mod]++;
            }else{
                ll[mod]=1;
            }
		}
		printf("%lld\n", ans);
    }
    return 0;
}
