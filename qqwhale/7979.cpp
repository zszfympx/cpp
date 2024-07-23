#include<bits/stdc++.h>
#include <deque>
using namespace std;
const int maxn = 1e5+10;
int a[maxn], b[maxn];
deque<int> q;
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i<=n; i++){
        scanf("%d", a+i);
        b[i] = b[i-1]+a[i];
    }
    int ans = 0;
    q.push_back(0);
    for(int i = 1; i<=n; i++){
        while(!q.empty()&&q.front()+m<i){
            q.pop_front();
        }
        ans = max(ans, b[i]-b[q.front()]);
        while(!q.empty()&&b[q.back()]>=b[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    printf("%d", ans);
    return 0;
}