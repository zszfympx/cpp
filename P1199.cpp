// Problem: P1199 [NOIP2010 普及组] 三国游戏
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1199
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int G[510][510];

int main(){
	int N;
	scanf("%d", &N);
	for(int i = 1; i<N; i++){
		for(int j = i+1; j<=N; j++){
			scanf("%d", &G[i][j]);
			G[j][i] = G[i][j];
		}
	}
	int ans = 0;
	for(int i = 1; i<=N; i++){
		sort(G[i]+1, G[i]+1+N);
		ans = max(ans, G[i][N-1]);
	}
	printf("1\n%d", ans);
	return 0;
}