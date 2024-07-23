#include<bits/stdc++.h>
using namespace std;
int n,a[100005],x=0,y=0,b[100005];
int main()
{  
    scanf("%d", &n);
    for(int i=1;i<=n;i++){ 
        scanf("%d", a+i);
        b[i]=a[i-1]-a[i];
    }
    for(int i=2;i<=n;i++)
    {
        if(b[i]>0) x+=b[i];
        else y-=b[i];
    }
    printf("%d\n%d",max(x,y),abs(y-x)+1);
    return 0;
}
