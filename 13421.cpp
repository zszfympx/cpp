#include <bits/stdc++.h>
using namespace std;

int bcj[510 * 510];
int n, m, ans;

int Find(int x) {
    if (bcj[x] != x) return bcj[x] = Find(bcj[x]);
    return x;
}

void Union(int x, int y) {
    x = Find(x), y = Find(y);
    if (x != y) bcj[x] = y;
}

int getid(int x, int y) {
    return (y - 1) * n + x;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n * n; i++) {
        bcj[i] = i;
    }
    while (m--) {
        int x, y; char op;
        cin >> x >> y >> op;
        ans++;
        if (op == 'R') {
            if (x < n && Find(getid(x, y)) == Find(getid(x + 1, y))) {
                printf("%d\n", ans);
                return 0;
            }
            if (x < n) Union(getid(x, y), getid(x + 1, y));
        } else {
            if (y < n && Find(getid(x, y)) == Find(getid(x, y + 1))) {
                printf("%d\n", ans);
                return 0;
            }
            if (y < n) Union(getid(x, y), getid(x, y + 1));
        }
    }
    printf("no solution\n");
    return 0;
}
