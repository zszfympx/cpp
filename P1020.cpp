#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N=100010;
int n,ans,a[N],f[N];
int main()
{
	int x;
	while(cin>>x)a[++n]=x;
	memset(f,0x3f,sizeof(f));
	reverse(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		int l=1,r=i;
		while(l<r)
		{
			int mid=(l+r)/2;
			if(f[mid]>a[i])r=mid;
			else l=mid+1;	
		}
		f[l]=min(f[l],a[i]);
		ans=max(ans,l);
	}
	cout<<ans<<endl;
	memset(f,0x3F,sizeof(f));
	reverse(a+1,a+n+1);
	ans=0;
	for(int i=1;i<=n;i++)
	{
		int l=1,r=i;
		while(l<r)
		{
			int mid=(l+r)/2;
			if(f[mid]>=a[i])r=mid;
			else l=mid+1;	
		}
		f[l]=min(f[l],a[i]);
		ans=max(ans,l);
	}
	cout<<ans<<endl;
	return 0;
}