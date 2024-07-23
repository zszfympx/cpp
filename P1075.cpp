// Problem: P1075 [NOIP2012 普及组] 质因数分解
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1075
// Memory Limit: 128 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 2; i*i<=n; i++){
		if(n%i==0){
			printf("%d", n/i);
			return 0;
		}
	}
}