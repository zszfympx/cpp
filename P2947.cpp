// Problem: P2947 [USACO09MAR] Look Up S
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2947
// Memory Limit: 500 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

stack<int> s;
int cows[100010];
int ans[100010];

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i<=n; i++){
		scanf("%d", cows+i);
	}
	for(int i = n; i>=1; i--){
		while(!s.empty()&&cows[s.top()]<=cows[i]){
			s.pop();
		}
		if(s.empty()){
			ans[i] = 0;
		}else{
			ans[i] = s.top();
		}
		s.push(i);
	}
	for(int i = 1; i<=n; i++){
		printf("%d\n", ans[i]);
	}
	return 0;
}