// Problem: P1088 [NOIP2004 普及组] 火星人
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1088
// Memory Limit: 125 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define maxn 114514

int nums[maxn];
int n, m;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> nums[i];
    while (m--) {
        int k = n - 1;
        while (nums[k - 1] > nums[k]) k--;
        k--;
        int t = k;
        while (t + 1 < n && nums[t + 1] > nums[k]) t++;
        swap(nums[k], nums[t]);
        reverse(nums + k + 1, nums + n);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}