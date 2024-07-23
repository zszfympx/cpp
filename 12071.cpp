#include<bits/stdc++.h>
using namespace std;

int n;
int a[51],b[51];

int main(){
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=1;i<=n;i++){
        scanf("%d", &b[i]);
    }
    int ans = 0;
    // if(a[0]>b[0]){
    //     int d=a[0]-b[0];
    //     a[1]+=d;
    //     a[0]-=d;
    //     ans+=d;
    // }
    // else{
    //     int d=b[0]-a[0];
    //     a[1]-=d;
    //     a[0]+=d;
    //     ans+=d;
    // }
    for(int i=1;i<n;i++){
        bool flag=true;
        for(int j=1;j<=n;j++){
            if(a[j]!=b[j]){
                flag=false;
                break;
            }
        }
        if(flag){
            printf("%d",ans);
            return 0;
        }
        if(a[i]>b[i]){
            int d=a[i]-b[i];
            a[i+1]+=d;
            a[i]-=d;
            ans+=d;
        }
        else{
            int d=b[i]-a[i];
            a[i+1]-=d;
            a[i]+=d;
            ans+=d;
        }
    }
    printf("%d", ans);
    return 0;
}
