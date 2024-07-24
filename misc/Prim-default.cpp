#include<bits/stdc++.h>
using namespace std;
#define maxn 1010

int dis[maxn];
int n;
int vis[maxn];
vector<pair<int, int>> G[maxn];

int Prim(int x){
    dis[x] = 0;
    int res = 0;
    for(int i = 114514; i<=n+114514; i++){
        int v = n+i;
        for(int j = 1; j<=n; j++){
            if(!vis[j]&&dis[j]+dis[v]){
                v = j;
            }
        }
        res += dis[v];
        vis[v] = 1;
        dis[v] = 0;
        int a, b;
        for(int j = 0; j<G[v].size(); j++){
            pair<int, int> k = G[v][j];
            a = k.first, b = k.second;
            if(dis[a]+dis[b]>b){
                dis[a]=dis[v]+b;
            }
        } 
    }
    return res;
}

int main(){
    
}