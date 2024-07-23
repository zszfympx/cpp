#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],l,r,mid;
inline bool check(int x)
{
    int tot=0,num=0;
    for(int i=1;i<=n;i++)
    {
        if(tot+a[i]<=x)tot+=a[i];
        else tot=a[i],num++;
    }
    return num>=m;
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]),l=max(l,a[i]),r+=a[i];
    while(l<=r)
    {
        mid=(l+r)>>1;
        if(check(mid))l=mid+1;
        else r=mid-1;
    }
    printf("%d", l);
    return 0;
}