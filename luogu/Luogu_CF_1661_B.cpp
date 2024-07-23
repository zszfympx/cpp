#include<bits/stdc++.h>
using namespace std;

int pow2[16] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768};

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int v, ans = 0;
        scanf("%d", &v);
        for(int i = 0; i<=15; i++){
            if(pow2[i]>v){
                ans+=pow2[i-1]-v;
            }
            ans+=15-i;
        }
        printf("%d ", ans);
    }
    return 0;
}