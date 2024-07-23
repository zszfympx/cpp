#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
struct ticket {
    int price, time;
    bool used;
}a[maxn];
int n, ans, l, r;
int main(){
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        int op, w, t;
        scanf("%d%d%d", &op, &w, &t);
        if(op==0){
            ans+=w;
            a[r].time = t+45;
            a[r].used = false;
            a[r++].price = w;
        }else{
            while(l<r&&a[l].time<t){
                l++;
            }
            bool flag = false;
            for(int j = l; j<r; j++){
                if(a[j].price>=w&&a[j].used==false){
                    flag = true;
                    a[j].used = true;
                    break;
                }
            }
            if(!flag) ans+=w;
        }
    }
    printf("%d", ans);
    return 0;
}