#include<bits/stdc++.h>
using namespace std;

queue<int> q;

bool bfs(int n, int m){
    while(!q.empty()) q.pop();
    q.push(n);
    while(!q.empty()){
        int t = q.front();
        q.pop();
        if(t==m) return true;
        if(t<m) continue;
        if(t%3==0) {q.push(t/3); q.push(t/3*2);}
    }
    return false;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d%d", &n, &m);
        if(bfs(n, m)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}