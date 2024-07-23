#include <bits/stdc++.h>
using namespace std;
int n;
bool Check(string s) {
  long long a, b, c, d, port;
  if (sscanf(s.c_str(), "%lld.%lld.%lld.%lld:%lld", &a, &b, &c, &d, &port) != 5)  return false;
  if (a < 0 || a > 255 || b < 0 || b > 255 || c < 0 || c > 255 || d < 0 || d > 255 || port < 0 || port > 65535)  return false;
  stringstream ss;
  ss << a << '.' << b << '.' << c << '.' << d << ':' << port;
  return ss.str() == s;
}
map<string, int> mp;
string op, ad;
int main() {
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    cin>>op>>ad;
    if (!Check(ad)) { puts("ERR"); continue; }
    if (op[0] == 'S') {
      if (mp[ad]) puts("FAIL");
      else mp[ad] = i, puts("OK");
    } else {
      if (!mp.count(ad)) puts("FAIL");
      else printf("%d\n", mp[ad]);
    }
  }
  return 0;
}