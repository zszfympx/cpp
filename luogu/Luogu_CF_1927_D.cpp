#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int cnt = 0;
        int a[500010], b[500010];
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
        int n;
        scanf("%d", &n);
        for(int i = 1; i<=n; i++){
            scanf("%d", &a[i]);
            if(a[i]!=a[i-1]){
                b[++cnt] = i;
            }
        }
        int q;
        scanf("%d", &q);
        while(q--){
            int l, r;
            scanf("%d%d", &l, &r);
            int x = upper_bound(b+1, b+cnt+1, l)-b;
            int y = upper_bound(b+1, b+cnt+1, r)-b;
            if(x==y){
                printf("-1 -1\n");
            }else{
                if(a[l]!=a[r]){
                    printf("%d %d\n", l, r);
                }else{
                    printf("%d %d\n", l, b[x]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}