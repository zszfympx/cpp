#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int l, r, x, a, b;
        scanf("%d%d%d%d%d", &l, &r, &x, &a, &b);
        if(a==b) printf("0\n");
        else if(abs(a-b)>=x) printf("1\n");
        else if((b-l<x&&r-b<x)||(a-l<x&&r-a<x)||r-l<x) printf("-1\n");
        else if((r-a>=x&&r-b>=x)||(a-l>=x&&b-l>=x)) printf("2\n");
        else printf("3\n");
    }
    return 0;
}