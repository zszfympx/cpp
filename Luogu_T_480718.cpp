#include<bits/stdc++.h>
using namespace std;

struct node{
    int id, a;
    double b;
}ll[100010];

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        ll[i].id = i;
        ll[i].a = a;
        ll[i].b = (double)b/a;
    }
    sort(ll+1, ll+1+n, [](const node& a, const node& b){return a.b==b.b?a.a>b.a:a.b<b.b;});
    printf("%d", ll[n].id);
    return 0;
}