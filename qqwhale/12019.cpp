#include<bits/stdc++.h>
using namespace std;

int Get(int n){
    int res = 0;
    while(n){
        res+=n/5;
        n/=5;
    }
    return res;
}
int ans = 0;
int main(){
    int n;
    scanf("%d", &n);
    if(n==0) {printf("1");return 0;}
    int l = 1, r = INT_MAX;
    while(l<=r){
        int mid = (l+r)>>1;
        if(Get(mid)>=n){
            ans = mid;
            r = mid-1;
        }else{
            l=mid+1;
        }
    }
    if(Get(ans)!=n) printf("No solution"); 
    else printf("%d", ans);
    return 0;
}
