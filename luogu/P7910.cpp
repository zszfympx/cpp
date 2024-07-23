#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
struct node{
    int val, id;
    bool operator<(const node &a) const{
        if(val<a.val) return true;
        if(id<a.id&&val==a.val) return true;
        return false;
    }
} nums[maxn];
int now[maxn];

int main(){
    int n, q;
    scanf("%d%d", &n, &q);
    for(int i = 1; i<=n; i++){
        nums[i].id = i;
        scanf("%d", &nums[i].val);
    }
    sort(nums+1, nums+n+1);
    for(int i = 1; i<=n; i++){
        now[nums[i].id] = i;
    }
    while(q--){
        int q;
        scanf("%d%d", &q);
        if(q==1){
            int x, y;
            scanf("%d%d", &x, &y);
            int s = now[x];
            nums[now[x]].val = y;   
            for(int i = s-1; i>=1; --i){
                if(nums[i].val>y||(nums[i].val == y&&x<nums[i].id)){
                    swap(now[x], now[nums[i].id]);
                    swap(nums[s], nums[i]);
                    s=now[x];
                }else{ break; }
            }
        }else{
            int x;
            scanf("%d", &x);
            printf("%d\n", now[x]);
        }
    }
    return 0;
}