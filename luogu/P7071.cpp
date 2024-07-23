// Problem: P7071 [CSP-J2020] 优秀的拆分
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P7071
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	if(n%2==1||n==0){
		printf("-1");
		return 0;
	}
	for(int i = 26; i>0; i--){
		if(n>=(1<<i)){
			printf("%d ", (1<<i));
			n-=(1<<i);
		}
	}
	return 0;
}