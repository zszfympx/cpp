#include<bits/stdc++.h>
using namespace std;
string s[12], g;
map<string, int> mp;
int main () {
	int x, n, a, b;
	scanf("%d", &n);
	x = n;
	for (int i = 1; i <= n; i++) cin >> s[i];
	while (x--) {
		cin >> g >> a >> b;
		if (!b) continue;
		mp[g] -= (a / b) * b;
		for (int i = 1; i <= b; i++) {
			cin >> g;
			mp[g] += a / b;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << s[i] << ' ' << mp[s[i]] << '\n';
	}
	return 0;
}