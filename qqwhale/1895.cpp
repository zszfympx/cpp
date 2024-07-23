#include<bits/stdc++.h>
using namespace std;
const int maxn = 10005;
int n, m, w, x, y, cnt, dp[maxn];
struct node1{
    int id, w, v;
}cloud[maxn];
struct node2{
    int w, v;
}a[maxn];
int Find(int x){
    if(cloud[x].id != x) return cloud[x].id=Find(cloud[x].id);
    return cloud[x].id;
}void Merge(int x, int y){
    int xx = Find(x), yy = Find(y);
    if(xx!=yy){
        cloud[xx].id = cloud[yy].id;
    }
}
int main(){
    scanf("%d%d", &n, &m, &w);
    for(int i = 1; i<=n; i++){
        scanf("%d%d", &cloud[i].w, &cloud[i].v);
        cloud[i].id = i;
    }
    for(int i = 1; i<=m; i++){
        scanf("%d%d", &x, &y);
        Merge(x, y);
    }
    for(int i = 1; i<=n; i++){
        if(cloud[i].id!=i){
            cloud[Find(cloud[i].id)].w += cloud[i].w;
            cloud[i].w = 0;
            cloud[Find(cloud[i].id)].v += cloud[i].v;
            cloud[i].v = 0;
        }
    }
    for(int i = 1; i<=n; i++){
        if(cloud[i].id == i){
            cnt++;
            a[cnt].w = cloud[i].w;
            a[cnt].v = cloud[i].v;
        }
    }
    for(int i = 1; i<=cnt; i++){
        for(int j = w; j>=1; j--){
            if(dp[j]<=dp[j-a[i].w]+a[i].v && j-a[i].w>=0){
                dp[j] = dp[j-a[i].w]+a[i].v;
            }
        }
    }
    printf("%d", dp[w]);
    return 0;
}