#include <bits/stdc++.h>
using namespace std;

const int maxn = 110;

int main() {
    int k;
    scanf("%d", &k);
    while (k--) {
        int n, a[maxn], dp_up[maxn], dp_do[maxn], ans = 1;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 1; i <= n; i++) {
            dp_up[i] = 1;
            for (int j = 1; j < i; j++) {
                if (a[j] < a[i]) {
                    dp_up[i] = max(dp_up[i], dp_up[j] + 1);
                }
            }
            ans = max(ans, dp_up[i]);
        }
        for (int i = 1; i <= n; i++) {
            dp_do[i] = 1;
            for (int j = 1; j < i; j++) {
                if (a[j] > a[i]) {
                    dp_do[i] = max(dp_do[i], dp_do[j] + 1);
                }
            }
            ans = max(ans, dp_do[i]);
        }
        printf("%d\n", ans);
    }
    return 0;
}