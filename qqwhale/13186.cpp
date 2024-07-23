#include<bits/stdc++.h>
using namespace std;
char s[1005];
int main(){
    int k, ans = -1;
    scanf("%s%d", s+1, &k);
    int n = strlen(s+1);
    for(int i = 0; i<n; i++){
        for(int l = i, r = i; l>=1&&r<=n; l--, r++){
            if(s[l]!=s[r]) break;
            if(s[l]-s[i]>=k) ans = max(ans, r-l+1);
        }
    }
    printf("%d", ans);
    return 0;
}