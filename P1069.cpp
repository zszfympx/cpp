// Problem: P1069 [NOIP2009 普及组] 细胞分裂
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1069
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int n, m1, m2, s[10001], zs[10001] = {0}, mz, t = 2, c, ans = INT_MAX, l;

int main(){
	scanf("%d%d%d",&n, &m1, &m2);
	for(int i= 1; i<=n; i++) scanf("%d",s+i);
	if(m1 ==1) {
		printf("0");
		return 0;
	}
	while(m1!=1){
		while(!(m1%t)) m1/=t, zs[t]++;
		mz = max(mz, t);
		zs[t++]*=m2;
	}
	for(int i = 1; i<=n; i++){
		l = 0;
		for(int j = 2; j<=mz; j++){
			if(!zs[j]) continue;
			c = 0;
			while(!(s[i]%j)) s[i]/=j, c++;
			if(!c) {l = INT_MAX;break;}
			l = max(l, (zs[j]-1)/c);
		}
		ans = min(ans, l);
	}
	printf("%d", ans==INT_MAX?-1:ans+1);
	return 0;
}