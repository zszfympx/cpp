#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[110];
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int cnt = unique(a, a+n)-a;
    if(cnt<2) printf("NO");
    else printf("%d", a[1]);
    return 0;
}