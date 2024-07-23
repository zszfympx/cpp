// Problem: P8094 [USACO22JAN] Cow Frisbee S
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P8094
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int a[300010];
stack<int> s;
int ans;

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i<=n; i++){
		scanf("%d", a+i);
	}
	for(int i = 1; i<=n; i++){
		while(!s.empty()&&a[s.top()]<a[i]){
			ans+=i-s.top()+1;
			s.pop();
		}
		if(!s.empty())ans+=i-s.top()+1;
		s.push(i);
	}
	printf("%d", ans);
	return 0;
}