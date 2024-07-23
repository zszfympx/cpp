#include<bits/stdc++.h>
using namespace std;

int ans = 0;

struct node{
    int x, y, l, w;
}a[10010];

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        scanf("%d%d%d%d", &a[i].x, &a[i].y, &a[i].l, &a[i].w);
    }
    int x, y;
    scanf("%d%d", &x, &y);
    for(int i = 1; i<=n; i++){
        if(a[i].x<=x&&a[i].x+a[i].w>=x&&a[i].y>=y&&a[i].y-a[i].l<=y){
            ans++;
        }
    }
    if(ans) printf("%d", ans);
    else printf("-1");
    return 0;
}