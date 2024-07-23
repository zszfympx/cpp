#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6+10;
int n, k, a[maxn];
deque<int> q;

int main(){
    scanf("%d%d", &n, &k);
    for(int i = 1; i<=n; i++){
        scanf("%d", a+i);
    }
    for(int i = 1; i<=n; i++){
        while(!q.empty()&&a[q.back()]>a[i])q.pop_back();
        q.push_back(i);
        while(!q.empty()&&q.front()<=i-k)q.pop_front();
        if(i>=k){
            printf("%d ", a[q.front()]);
        }
    }
    q.clear(); printf("\n");
    for(int i = 1; i<=n; i++){
        while(!q.empty()&&a[q.back()]<a[i]) q.pop_back();
        q.push_back(i);
        while(!q.empty()&&q.front()<=i-k) q.pop_front();
        if(i>=k){
            printf("%d ", a[q.front()]);
        }
    }
}