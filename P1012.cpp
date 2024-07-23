#include<bits/stdc++.h>
using namespace std;
int a[100], b[100], c[100], d[100];
int n, ans;

void print(){
    if(ans<=2){
        for(int i = 1; i<=n; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    ans++;
}

void dfs(int i){
    if(i>n){
        print();
        return;
    }else{
        for(int j = 1; j<=n; j++){
            if((!b[j])&&(!c[i+j])&&(!d[i-j+n])){
                a[i] = j;
                b[j] = 1;
                c[i+j] = 1;
                d[i-j+n] = 1;
                dfs(i+1);
                b[j] = 0;
                c[i+j] = 0;
                d[i-j+n] = 0;
            }
        }
    }
}

int main(){
    scanf("%d", &n);
    dfs(1);
    printf("%d", ans);
    return 0;
}

