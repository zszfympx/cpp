#include<bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int solve(int x, int y){
    int z = y;
    int res = 1;
    while(y--){
        res*=x;
        res%=MOD;
        x--;
    }
    return res/z;
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int ans = 0;
    ans+=solve(n-m, m+1);
    ans+=solve(n-m, m);
    ans+=solve(n-m, m);
    ans+=solve(n-m, m-1);
    printf("%d", ans+1%MOD);
    return 0;
}