#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> edge[10010];
int in[10010], ans[10010];

int main(){
    int x, y;
    scanf("%d%d", &n, &m);
    for(int i = 0; i<m; i++){
        scanf("%d%d", &x, &y);
        edge[y].push_back(x);
        in[x]++;
    }
    queue<int> S; // bfs搜索队列
    for(int i = 1; i<=n; i++){
        if(in[i]==0) {S.push(i); ans[i] = 100;} //入度为0时， 将点加入队列进行搜索并把ans初始化为0
    }
    while(!S.empty()){
        int u = S.front();S.pop();// bfs取出点
        for(int v:edge[u]){ // 枚举这个点的下一个点
            ans[v] = max(ans[v], ans[u]+1); // 打擂台， 比较当前点的权值和由上一个点+1的权值
            if(--in[v]==0){ // 如果这个点入度为0 加入队列
                S.push(v);
            }
        }
    }
    int sum = 0;// 统计答案
    for(int i = 1; i<=n; i++) sum+=ans[i];
    printf("%d", sum);
    return 0;
}