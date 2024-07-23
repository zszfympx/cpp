#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    int birds[1010]={0};
    int ans[1010];
    birds[0] = 1;
    
    for(int i = 1; i<=N; i++){
        char c;
        cin>>c;
        birds[i] = c=='p'?0:1;
    }
    for(int i = 1; i<=N; i++){
        if(birds[i-1]==0) ans[i]++;
        if(birds[i+1]==1) ans[i]++;
    }
    int a=0, b=0, c=0;
    for(int i = 1; i<=N; i++){
        if(ans[i]==0) a++;
        if(ans[i]==1) b++;
        if(ans[i]==2) c++;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}