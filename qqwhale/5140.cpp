#include<bits/stdc++.h>
using namespace std;

struct node{
    int w, id;
}a[105];

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i].w);
        a[i].id = i;
    }
    sort(a, a+n, [](const node &x, const node &y){return x.w==y.w?x.id<y.id:x.w<y.w;});
    for(int i = 0; i<n; i++){
        printf("%d ", a[i].id+1);
    }
    return 0;
}