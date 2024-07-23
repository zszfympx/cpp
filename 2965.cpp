#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int nums[100010];
int n, k;
bool check(int x){
    int sum = 0;
    for(int i:nums){
        sum+=i/x;
    }
    return sum>=k;
}
int ans = 0;
int main(){
    scanf("%d%d", &n, &k);
    int maxn = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &nums[i]);
        maxn = max(maxn, nums[i]);
    }
    int l = 1, r = maxn;
    while(l<=r){
        int mid = (l+r)>>1;
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
