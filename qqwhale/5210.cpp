#include <bits/stdc++.h>
using namespace std;
int s[11000], ans;
int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  for (int i = 1; i <= n; i++)
    scanf("%d", s+i);
  int t = m + 1;
  while (t <= n + m) {
    for (int i = 1; i <= m; i++) {
      s[i]--;
      if (s[i] == 0) {
        s[i] = s[t];
        t++;
      }
    }
    ans++;
  }
  printf("%d", ans);
  return 0;
}