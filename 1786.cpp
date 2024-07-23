#include<bits/stdc++.h>
using namespace std;

int n, m, a[100010];

bool check(int x){
    int tot = 0, sum = 0;
    for(int i = 0; i<n; i++){
        if(tot+a[i]<=x) tot+=a[i];
        else tot=a[i], sum++;
    }
    return sum>=x;
}

int main(){
    scanf("%d%d", &n, &m);
    int l = 0, r = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", a+i);
        l = max(a[i], l);
        r+=a[i];
    }
    while(l+1<r){
        int mid = (l+r)>>1;
        if(check(mid)){
            r = mid;
        }else{
            l = mid;
        }
    }
    printf("%d", r);
}