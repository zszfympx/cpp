#include<bits/stdc++.h>
using namespace std;

int a[25];
int n, w;

bool check(int x){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum+= (a[i]+2*x)*(a[i]+2*x);
    }
    return sum>=w;
}

int main(){
    scanf("%d%d", &n, &w);
    int l = 1, r = w;
    for(int i = 0; i<n; i++){
        scanf("%d", a+i);
        r-=a[i]*a[i];
    }
    r/=2;
    int ans;
    while(l<=r){
        int mid = (l+r)>>1;
        if(check(mid)){
            ans = mid;
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    printf("%d", ans);
    return 0;
}