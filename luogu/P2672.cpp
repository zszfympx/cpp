// Problem: P2672 [NOIP2015 普及组] 推销员
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2672
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

struct node{
	int s, v;
	bool operator<(const node a) const{
		return v>a.v;
	}
}a[114514];

int main(){
	int h[114514], q[114514], qm[114514];
	int N;
	scanf("%d", &N);
	for(int i = 1; i<=N; i++) scanf("%d", &a[i].s);
	for(int i = 1; i<=N; i++) scanf("%d", &a[i].v);
	sort(a+1, a+N+1);
	for(int i = N; i>=1; i--) {
		h[i] = max(h[i+1], 2*a[i].s+a[i].v); 
	}
	for(int i = 1; i<=N; i++){
		qm[i] = max(qm[i-1], a[i].s); 
	}
	for(int i = 1; i<=N; i++){
		q[i] = q[i-1]+a[i].v;
	}
	for(int i = 1; i<=N; i++){
		int ans =  max(q[i-1]+h[i], q[i]+2*qm[i]);
		printf("%d\n", ans);
	}
}