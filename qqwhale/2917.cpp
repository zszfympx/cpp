#include<bits/stdc++.h>
using namespace std;
#define maxn 100010

int n, p;
int a[maxn], b[maxn];

int main(){
    scanf("%d%d", &n, &p);
    for(int i = 1; i<=n; i++){
        scanf("%d", a+i);
        b[i] = a[i]+b[i-1];
    }
    while(p--){
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%d\n", b[r]-b[l]+a[l]);
    }
    return 0;
}