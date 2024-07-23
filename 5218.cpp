#include<bits/stdc++.h>
using namespace std;

struct node{
    int n, p;
}x[1005], y[1005];

bool cmp1(node a, node b){
    return a.n>b.n;
}

bool cmp2(node a, node b){
    return a.p<b.p;
}

int main(){
    int m, n, k, l, d;
    scanf("%d%d%d%d%d", &m, &n, &k, &l, &d);
    for(int i = 0;  i<d; i++){
        int x1, x2, y1, y2;
        scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
        if(x1==x2){
            y[min(y1, y2)].p = min(y1, y2);
            y[min(y1, y2)].n++;
        }else{
            x[min(x1, x2)].p = min(x1, x2);
            x[min(x1, x2)].n++; 
        }
    }
    sort(y+1, y+n+1, cmp1);
    sort(x+1, x+m+1, cmp1);
    sort(y+1, y+l+1, cmp2);
    sort(x+1, x+k+1, cmp2);
    for(int i = 1; i<=k; i++)
        printf("%d ", x[i].p);
    printf("\n");
    for(int i = 1; i<=l; i++)
        printf("%d ", y[i].p);
    return 0;
}