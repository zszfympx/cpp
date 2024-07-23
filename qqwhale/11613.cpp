#include<bits/stdc++.h>
using namespace std;

int f[40010];

int main(){
    int n;
    scanf("%d", &n);
    f[1] = 1;
    for(int i = 2; i<=40000; i++){
        f[i] = f[i-1]+i;
        if(((f[i]-n)/2==(int)((f[i]-n)/2))&&(f[i]-n)>0){
            printf("%d %d", (f[i]-n)/2, i);
            return 0;
        }
    }
}