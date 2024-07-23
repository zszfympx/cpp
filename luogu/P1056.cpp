// Problem: P1056 [NOIP2008 普及组] 排座椅
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1056
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

struct node{
	int cnt, id;
}r[1005], c[1005];
int n, m, k, l, d;
bool cmp1(node x, node y) {
	return x.cnt>y.cnt;
}
bool cmp2(node x, node y) {
	return x.id<y.id;
}
void solve(node a[], int all, int head){
	for(int i = 1; i<=all; i++) a[i].id = i;
	sort(a+1, a+all+1, cmp1);
	sort(a+1, a+head+1, cmp2);
	for(int i = 1; i<=head; i++) cout<<a[i].id<< " ";
	cout<<"\n";
}

int main(){
	cin>>n>>m>>k>>l>>d;
	while(d--){
		int x, y, p, q;
		cin>>x>>y>>p>>q;
		if(x==p) c[min(y, q)].cnt++;
		if(y==q) r[min(x, p)].cnt++;
	}
	solve(r, m, k);
	solve(c, n, l);
	return 0;
}