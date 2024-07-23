#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    scanf("%d%d", &n, &q);
    int books[1010];
    for(int i = 0; i<n; i++) scanf("%d", books+i);
    while(q--){
        int a, b;
        scanf("%d%d", &a, &b);
        int minn = INT_MAX;
        for(int j = 0; j<n; j++){
            if(books[j]%(int)pow(10, a)==b&&books[j]<minn) minn = books[j];
        }
        if(minn != INT_MAX)printf("%d\n", minn);
        else printf("-1\n");
    }
    return 0;
}