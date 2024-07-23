// Problem: P1094 [NOIP2007 普及组] 纪念品分组
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1094
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int w, n;
	scanf("%d%d", &w, &n);
	int nums[30010];
	for(int i = 1; i<=n; i++){
		scanf("%d", &nums[i]);
	}
	sort(nums+1, nums+n+1);
	int l = 1, r = n;
	int ans = 0;
	while(l<=r){
		if(nums[l]+nums[r]<=w){
			l++, r--, ans++; 
		}else{
			r--, ans++;
		}
	}
	printf("%d", ans);
	return 0;
}