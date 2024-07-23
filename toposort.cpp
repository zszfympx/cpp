// 拓扑排序（Topological sorting）要解决的问题是如何给一个有向无环图的所有节点排序。
// 拓扑排序的目标是将所有节点排序，使得排在前面的节点不能依赖于排在后面的节点。
/* 我们用有向图来表现子工程之间的先后关系，子工程之间的先后关系为有向边，这种有向图称为顶点活动网络，即 AOV 网 (Activity On Vertex Network)。
一个 AOV 网必定是一个有向无环图，即不带有回路。与 DAG 不同的是，AOV 的活动都表示在边上。*/


/*
L ← Empty list that will contain the sorted elements
S ← Set of all nodes with no incoming edges
while S is not empty do
    remove a node n from S
    insert n into L
    for each node m with an edge e from n to m do
        remove edge e from the graph
        if m has no other incoming edges then
            insert m into S
if graph has edges then
    return error (graph has at least one cycle)
else
    return L (a topologically sorted order)
*/
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
}
