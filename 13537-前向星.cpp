#include<bits/stdc++.h>
using namespace std;

#define LL long long
const int N = 1000;

char *p1, *p2, buf[N];
#define nc() (p1 == p2 && (p2 = (p1 = buf) +\
fread(buf, 1, N, stdin), p1 == p2) ? EOF : *p1 ++ )
LL read()
{
    LL x = 0, f = 1;
    char ch = nc();
    while (ch < 48 || ch > 57)
    {
        if (ch == '-') f = -1;
        ch = nc();
    }
    while (ch >= 48 && ch <= 57)
        x = (x << 3) + (x << 1) + (ch ^ 48), ch = nc();
    return x * f;
}

char obuf[N], *p3 = obuf;
#define putchar(x) (p3 - obuf < N) ? (*p3 ++ = x) :\
(fwrite(obuf, p3 - obuf, 1, stdout), p3 = obuf, *p3 ++ = x)
inline void write(LL x)
{
    if (!x)
    {
        putchar('0');
        return;
    }
    LL len = 0, k1 = x, c[40];
    if (k1 < 0) k1 = -k1, putchar('-');
    while (k1) c[len ++ ] = k1 % 10 ^ 48, k1 /= 10;
    while (len -- ) putchar(c[len]);
    putchar(' ');
}

int n, m;
vector<int> he, ne, to;

void add(int u, int v){
    ne.push_back(he[u]);
    he[u] = to.size();
    to.push_back(v);
}

int main(){
    n = read(); m = read();
    he.resize(n+1, -1);
    for(int i = 0; i<m; i++){
        int x, y;
        x = read(); y = read();
        add(x, y);
        add(y, x);
    }
    int k;
    k = read();
    set<int> s;
    for(int i = he[k]; ~i; i=ne[i]){
        s.insert(to[i]);
    }
    for(int i:s){
        write(i);
    }
    fwrite(obuf, p3 - obuf, 1, stdout);
    return 0;
}