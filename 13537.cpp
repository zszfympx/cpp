#include<bits/stdc++.h>
using namespace std;

vector<int> G[10010];

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i<m; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int k;
    scanf("%d", &k);
    sort(G[k].begin(), G[k].end());
    set<int> s;
    for(int i:G[k]){
        s.insert(i);
    }
    for(int i:s){
        printf("%d ", i);
    }
    return 0;
}