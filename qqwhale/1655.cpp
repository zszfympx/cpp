#include<bits/stdc++.h>
using namespace std;

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

int a[100010], b[100010];

int main(){
    int n;
    rei(n);
    for(int i = 1; i<=n; i++){
        rei(a[i]);
    }
    for(int i = 1; i<=n; i++){
        rei(b[i]);
    }
    int ans = 0;
    for(int i = 1; i<=n; i++){
        ans++;
        for(int j = 1; j<=n; j++){
            if(a[j]>a[i]&&b[j]>b[i])
                {ans--; break;}
        }
    }
    wri(ans);
    return 0;
}