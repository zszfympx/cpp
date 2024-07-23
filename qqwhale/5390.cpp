
#include <bits/stdc++.h>
using namespace std;

struct node {
    int z, x, y, a;
};

int G[110][110][110], book[110][110][110];
int x, y, z, fx, fy, fz;
bool flag = false;
int dx[6] = {0, 0, -1, 1, 0, 0};
int dy[6] = {1, -1, 0, 0, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
queue<node> q;

int main() {
    while (true) {
        scanf("%d%d%d", &z, &x, &y);
        if (x == 0 && y == 0 && z == 0) return 0;

        char c;
        int sx, sy, sz;
        flag = false;
        memset(G, 0, sizeof G);
        memset(book, 0, sizeof book);

        for (int zz = 1; zz <= z; zz++) {
            for (int xx = 1; xx <= x; xx++) {
                for (int yy = 1; yy <= y; yy++) {
                    cin >> c;
                    if (c == 'S') {
                        sz = zz; sx = xx; sy = yy; G[zz][xx][yy] = 0;
                    } else if (c == 'E') {
                        fz = zz; fx = xx; fy = yy; G[zz][xx][yy] = 0;
                    } else if (c == '.') {
                        G[zz][xx][yy] = 0;
                    } else {
                        G[zz][xx][yy] = 1;
                    }
                }
            }
        }

        q.push({sz, sx, sy, 0});
        book[sz][sx][sy] = 1;

        while (!q.empty() && !flag) {
            node t = q.front();
            q.pop();

            if (t.x == fx && t.y == fy && t.z == fz) {
                printf("Escaped in %d minute(s).\n", t.a);
                flag = true;
                break;
            }

            for (int k = 0; k < 6; k++) {
                int xx = t.x + dx[k], yy = t.y + dy[k], zz = t.z + dz[k];
                if (0 < xx && xx <= x && 0 < yy && yy <= y && 0 < zz && zz <= z && G[zz][xx][yy] == 0 && book[zz][xx][yy] == 0) {
                    book[zz][xx][yy] = 1;
                    q.push({zz, xx, yy, t.a + 1});
                }
            }
        }

        if (!flag) {
            printf("Trapped!\n");
        }
        while (!q.empty()) q.pop();
    }
}