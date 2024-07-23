    #include <bits/stdc++.h>
    using namespace std;

    const int N=2001;
    int a[N],b[N],g[N][N],f[N];


    int main()
    {
        int n,i,j; scanf("%d",&n);
        for (i=1;i<=n;++i) scanf("%d",&a[i]);
        for (i=1;i<=n;++i) scanf("%d",&b[i]);
        sort(a+1,a+n+1,[](int n1,int n2) {return n1>n2;}),sort(b+1,b+n+1,[](int n1,int n2) {return n1>n2;});
        for (i=1;i<=n;++i)
            for (j=1;j<=n;++j)
            {
                if (a[i]>b[j]) g[i][j]=200;
                else if (a[i]==b[j]) g[i][j]=0;
                else g[i][j]=-200;
            }
        for (i=1;i<=n;++i) f[i]=INT_MIN;
        for (i=1;i<=n;++i)
        {
            f[i]=f[i-1]+g[i][i];
            for (j=i-1;j>0;--j)
                f[j]=max(f[j]+g[n-i+j+1][i],f[j-1]+g[j][i]);
            f[0]=f[0]+g[n-i+1][i];
        }
        int ans=f[1];
        for (i=2;i<=n;++i) ans=max(ans,f[i]);
        printf("%d\n",ans);
        return 0;
    }