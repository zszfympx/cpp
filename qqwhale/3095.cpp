#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define maxn 100010

int n, p;
int a[maxn], b[maxn];

int main(){
    scanf("%d%d", &n, &p);
    for(int i = 1; i<=n; i++){
        scanf("%d", a+i);
        b[i] = a[i]-a[i-1];
    }
    for(int i = 0; i<p; i++){
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        b[x]-=z;
        b[y+1]+=z;
    }
    int ans = 0;
    for(int i = 1; i<=n; i++){
        a[i] = a[i-1]+b[i];
        ans = max(a[i], ans);
    }
    printf("%d", ans);
    return 0;
}