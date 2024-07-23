#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;
const int N = 3e5 + 10;
ll t[N] , a[N] , p[N];
int abs_read (void) {
	int f = 1 , res = 0;
	char ch = getchar ();
	while (ch < '0' || ch > '9') {
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') {
		res = res * 10 + (ch - '0');
		ch = getchar();
	}
	return res;
}
int main() {
	ll __T = abs_read() ;
	while (__T --) {
		int n = abs_read() , k = abs_read(), f = 1;
		ll sum = 0;
		for (int i = 1 ; i <= n ; i ++) t[i] = 0 , a[i] = abs_read();
		for (int i = 1 ; i <= n ; i ++) {
			p[i] =  abs_read();
			t[p[i]] += a[i];
		}
		for (int i = 1 ; i <= n ; i ++) {
			sum = sum + k - t[i];
			if (sum >= 0) f = 1;
			else {
				f = 0;
				break;
			}
		}
		if (f) puts ("YES");
		else puts ("NO");
 	}
	return 0;
}
