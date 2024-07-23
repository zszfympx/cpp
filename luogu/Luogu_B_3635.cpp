#include<bits/stdc++.h> 
using namespace std;

int f[1000010];

int main(){
    int n;
    scanf("%d", &n);
    f[0] = 0, f[1] = 1, f[5] = 1, f[11] = 1;
    for(int i = 1; i<=n; i++){
        int a = INT_MAX, b = INT_MAX, c = INT_MAX;
        a = f[i-1];
        if(i>=5) b=f[i-5];
        if(i>=11) c = f[i-11];
        f[i] = min(min(a, b), c)+1;
    }
    printf("%d", f[n]);
    return 0;
}