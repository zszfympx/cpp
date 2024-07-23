#include<bits/stdc++.h>
using namespace std;
#define maxn 1000005
struct ticket {
    int price, time;
};
vector<ticket> a(maxn);
int n, ans, l, r;
int main(){
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        int op, w, t;
        scanf("%d%d%d", &op, &w, &t);
        if(op==0){
            ans+=w;
            a.push_back({w, t});
            r++;
        }else{
            while(l<r&&a[l].time<t) l++;
            bool flag = false;
            for(int j = l; j<r; j++){
                if(a[j].price>=w){
                    flag = true;
                    a.erase(a.begin()+j);
                    r--;
                    break;
                }
            }
            if(!flag) ans+=w;
        }
    }
    printf("%d", ans);
    return 0;
}