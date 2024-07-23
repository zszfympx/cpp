#include<bits/stdc++.h>
#include <clocale>
using namespace std;

struct node{
    int a, b = 0, id, sum;
}ll[1010];

int main(){
    int n, m;
    scanf("%d%d", &m, &n);
    for(int i = 1; i <= n; i++){
        ll[i].id = i;
        int x;
        scanf("%d", &x);
        ll[i].a = x;
    }
    for(int i = 1; i<=m; i++){
        int x;
        scanf("%d", &x);
        ll[x].b++;
    }
    for(int i = 1; i<=n; i++){
        ll[i].sum = ll[i].a*ll[i].b;
    }
    sort(ll+1, ll+1+n, [](const node& a, const node &b){return a.sum==b.sum?a.id>b.id:a.sum<b.sum;});
    printf("%d", ll[n].id);
    return 0;
}