// Problem: P1044 [NOIP2003 普及组] 栈
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1044
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int ans[18] = {1,2,5,14,42,132,429,1430,4862,16796,58786,208012,742900,2674440,9694845,35357670,129644790,477638700};
	int n;
	scanf("%d", &n);
	printf("%d", ans[n-1]);
	return 0;
}