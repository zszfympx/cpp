#include <bits/stdc++.h>
using namespace std;
#define maxn 25

int G[maxn][maxn];

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &G[i][j]);
        }
    }
    int h[maxn], l[maxn];
    for(int i = 0; i < m; i++) {
        int hmax = 0;
        for(int j = 0; j < n; j++) {
            if(hmax < G[i][j]) {
                hmax = G[i][j];
                h[i] = j;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        int lmin = INT_MAX;
        for(int j = 0; j < m; j++) {
            if(lmin > G[j][i]) {
                lmin = G[j][i];
                l[i] = j;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(h[j] == i && l[i] == j) {
                printf("%d %d %d\n", j + 1, i + 1, G[j][i]);
                return 0;
            }
        }
    }
    printf("none\n");
    return 0;
}