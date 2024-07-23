#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int a [110], b[110];

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){ scanf("%d", a+i); b[i]=a[i];}
    sort(a+1, a+1+n);
    int k, m;
    scanf("%d%d", &k, &m);
    int x = a[k];
    int cnt = upper_bound(a+1, a+1+n, a[k])-lower_bound(a+1, a+1+n, a[k]);
    if(b[m]<x) printf("YeS");
    else if(b[m]==x) {
        if(cnt==1) printf("YeS");
        else printf("MaYbE");
    }
    else printf("nO");
    return 0;
}