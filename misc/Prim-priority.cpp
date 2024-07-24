#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<cstring>
#include<queue>
using namespace std;

typedef pair<int, int> PII;
//#define PII pair<int,int>

// 点的编号约定为 1~n
const int N = 1e4 + 5;
vector<pair<int, int> > g[N];
int n, m, dis[N], biao[N];

void add(int a, int b, int c) { // a-->b 边长为c
    g[a].push_back({b, c});
}

int Prim(int x) {
    int res = 0;
    priority_queue<PII, vector<PII>, greater<PII> > q;
    dis[x] = 0;
    q.push({0, x});
    while (q.size()) {
        PII tou = q.top(); q.pop();
        int v = tou.second;
        if (biao[v]) continue;
        biao[v] = 1; res+=dis[v];
        dis[v] = 0;
        for (int i = 0; i < g[v].size(); ++i) {
            PII p = g[v][i];
            int j = p.first, w = p.second;
            if (dis[j] > dis[v] + w) {
                dis[j] = dis[v] + w;
                q.push({dis[j], j});
            }
        }
    }
    return res;
}

int main() {
    memset(dis, 0x3f, sizeof dis);
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        add(a, b, c);
        add(b, a, c);
    }
    cout<<Prim(1);
//  cout<<dis[7];
    return 0;
}
