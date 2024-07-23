#include <bits/stdc++.h>
using namespace std;
int n, m;
unsigned long long ans;
int a[10000010], b[1000010];
int main() {
  scanf("%d%d", &n, &m);
  for (int i = 1; i <= n; i++)
    scanf("%d", a + i);
  for (int i = 1; i <= m; i++)
    scanf("%d", b + i);
  sort(a + 1, a + n + 1);
  for (int i = 1; i <= m; i++) {
    int l = 0, r = n + 1;
    while (l < r) {
      int mid = (l + r) / 2;
      if (a[mid] <= b[i])
        l = mid + 1;
      else
        r = mid;
    }
    if (b[i] <= a[1])
      ans += a[1] - b[i];
    else
      ans += min(abs(a[l - 1] - b[i]), abs(a[l] - b[i]));
  }
  cout << ans;
  return 0;
}