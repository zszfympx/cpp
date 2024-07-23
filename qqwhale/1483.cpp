#include<bits/stdc++.h>
#include <climits>
using namespace std;

int a[100010];
int n, m;
int ans;

bool check(int x){
    int sum = 1, d=a[0];
    for(int i = 1; i<n; i++){
        if(a[i]-d>=x){
            d = a[i];
            sum++;
        }
    }
    return sum>=m;
}


int main(){
    scanf("%d%d", &n, &m);
    int l = 1, r = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", a+i);
        r = max(a[i], r);
    }
    sort(a, a+n);
    while(l<=r){
        int mid = (l+r)>>1;
        if(check(mid)){
            l=mid+1;
            ans = mid;
        }else{
            r=mid-1;
        }
    }
    printf("%d", ans);
    return 0;
}