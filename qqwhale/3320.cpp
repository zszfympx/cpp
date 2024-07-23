#include <bits/stdc++.h>
using namespace std;
int n;
struct node{
    int time, w;
}a[5010];
int main(){
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>a[i].time>>a[i].w;
    }
    sort(a+1, a+1+n, [](const node &x, const node &y){return x.w==y.w?x.time<y.time:x.w>y.w;});
    int book[5010] = {}, ans = 0;
    for(int i = 1; i<=n; i++){
        for(int j = a[i].time; j>=1; j--){
            if(book[j]==0){
                book[j] = 1;
                ans+=a[j].w;
                break;
            }
        }
    }
    printf("%d", ans);
    return 0;
}