#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[100010];
int ans;
bool check(int x){
    int sum = 0, res = 0;
    for(int i = 0; i<n; i++){
        if(sum+a[i]<=x) sum+=a[i];
        else sum=a[i], res++;
    }
    return res>=m;
}

int main(){
    int l = 0, r = 0;
    scanf("%d%d", &n, &m);
    for(int i = 0; i<n; i++){
        scanf("%d", a+i);
        l = max(l, a[i]);
        r +=a[i];
    }
    while(l<=r){
        int mid = (l+r)>>1;
        if(check(mid)){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    printf("%d", l);
    return 0;
}