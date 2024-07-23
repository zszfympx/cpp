#include<bits/stdc++.h>
#define ONLINE_JUDGE
#ifdef ONLINE_JUDGE
#define getchar() p1 == p2 && (p2 = (p1 = buf) + fread (buf, 1, 1 << 18, stdin), p1 == p2) ? EOF : *p1++
#define flush() fwrite (buffer, 1, p11 + 1, stdout), p11 = -1
#define putchar(c) p11 == p22 ? flush(), buffer[++p11] = c : buffer[++p11] = c
char buf[1 << 18], *p1 = buf, *p2 = buf;
char buffer[1 << 18];
int p11 = -1;
const int p22 = (1 << 18) - 1;
#endif
template <typename T> inline void rei (T &x) {
	x = 0; bool f = 1; int ch;
	while (!isdigit (ch = getchar ())) f = ch != '-';
	if (f) do x = x * 10 + (ch & 15); while (isdigit (ch = getchar ()));
	else   do x = x * 10 - (ch & 15); while (isdigit (ch = getchar ()));
}
template <typename T> inline void wri (T x) {
	if (x < 0) putchar ('-'), x = ~x + 1;
	static int stk[40], top = 0;
	while (x) stk[++top] = x % 10, x /= 10;
	if (top == 0) stk[++top] = 0;
	while (top) putchar (stk[top--] ^ 48);
	putchar (' ');
}
template <typename T, typename... Args> inline void rei (T &x, Args&... args) {rei (x), rei (args...);}
template <typename T, typename... Args> inline void wri (T x, Args... args) {wri (x), wri (args...);}
template <typename T1, typename T2> inline T1 &cmin (T1 &a, const T2 &b) {return a > b ? a = b : a;}
template <typename T1, typename T2> inline T1 &cmax (T1 &a, const T2 &b) {return a < b ? a = b : a;}
typedef long long LL;
typedef unsigned long long ULL;
#define fir(i,a,b,...) for (register int i = (a), ##__VA_ARGS__; i <= (b); i++)
#define firr(i,a,b,...) for (register int i = (a), ##__VA_ARGS__; i >= (b); i--)
#define cls(a) memset (a, 0, sizeof a)
#define mset(a,b) memset (a, b, sizeof a)
#define dbug(x) (void)(cerr << #x " = " << x << endl)
using namespace std;

signed main () {
	min(1, 2);
#ifdef ONLINE_JUDGE
	flush ();
#endif
	return 0;
}