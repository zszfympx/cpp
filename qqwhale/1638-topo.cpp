#include<bits/stdc++.h>
using namespace std;
#define MAXN 1010

int n, m;
vector<int> G[MAXN];
int in[MAXN];

bool toposort(){
    vector<int> L;
    queue<int> S;
    for(int i = 1; i<=n; i++){
        if(in[i]==0) S.push(i);
    }
    while(!S.empty()){
        int u = S.front();
        S.pop();
        L.push_back(u);
        for(auto v:G[u]){
            if(--in[v]==0){
                S.push(v);
            }
        }
        if(L.size()==0){
            for(auto i:L){
                cout<<i<<" ";
                return true;
            }
        }else{
            return false;
        }
    }
    return false;
}


int main(){
    int x, y;
    scanf("%d%d", &n, &m);
    for(int i = 0; i<m; i++){
        scanf("%d%d", &x, &y);
        G[x].push_back(y);
        in[y]++;
    }
    if(toposort()) printf("no circle");
    else printf("circle");
    return 0;
}