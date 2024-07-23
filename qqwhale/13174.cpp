#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
const int N = 2e3+10;
int n, a[N], sum;
int main(){
    cin>>n;
    for(int i = 1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    sort(a+1, a+1+n);
    for(int i = 1; i<=n; i++){
        for(int j = i+1;j<=n; j++){
            int x = a[i], y = a[j];
            int len = lower_bound(a+1, a+1+n, x+y)-upper_bound(a+1, a+1+n, abs(x-y));
            if(abs(x-y)<x) len--;
            if(abs(x-y)<y) len--;
            if(len>0) sum+=len;
        }
    }
    printf("%d", sum/3);
    return 0;
}