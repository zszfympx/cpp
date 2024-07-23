// Problem: P1061 [NOIP2006 普及组] Jam 的计数法
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1061
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int s,t,w,a[30];
string q;
void solve()
{
	for(int i=w;i>=1;i--)
		if(a[i]-'a'+1<t-w+i)
		{
			a[i]++;
			for(int j=i+1;j<=w;j++) a[j]=a[j-1]+1;
			for(int j=1;j<=w;j++) putchar(a[j]);
			putchar('\n');
			return;
		}
}
int main()
{
	scanf("%d%d%d",&s,&t,&w);
	cin>>q;
	for(int i=0;i<w;i++) a[i+1]=q[i];
	for(int i=1;i<=5;i++) solve();
	return 0;
}