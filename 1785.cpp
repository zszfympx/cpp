#include<bits/stdc++.h>
using namespace std;
long long nums[10010];
int n, k;
bool check(long long x){
    int sum = 0;
    for(long long i:nums){
        sum+=(int)i/x;
        if(sum>=k) return true;
    }
    return false;
}
int ans = 0;
int main(){
    scanf("%d%d", &n, &k);
    long long maxn = 0;
    for(int i = 0; i<n; i++){
        scanf("%lld", nums+i);
        maxn = max(nums[i], maxn);
    }
    long long l = 1, r = maxn;
    while(l<=r){
        long long mid = (l+r)>>1;
        if(check(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r = mid-1;
        }
    }
    printf("%d", ans);
    return 0;
}