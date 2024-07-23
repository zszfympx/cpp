#include<bits/stdc++.h>
using namespace std;
#define lld long long

int n, m;
lld a[1000010];
lld ans;

bool check(lld x){
    lld sum = 0;
    for(int i = 0; i<n; i++){
        if(a[i]>x)sum+=a[i]-x;
    }
    return sum>=m;
}

int main(){
    scanf("%d%d", &n, &m);
    lld l = 0, r = 0;
    for(int i = 0; i<n; i++){
        scanf("%lld", a+i);
        r = max(r, a[i]);
    }
    while(l<=r){
        lld mid = (l+r)>>1;
        if(check(mid)){
            ans = mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    printf("%lld", ans);
    return 0;
}