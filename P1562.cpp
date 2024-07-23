#include<bits/stdc++.h>
#define lowbit(x) ((x)&(-x))
#define MAX 30
using namespace std;

int N,ans,f[MAX];

void DFS(int use1,int use2,int use3,int ord)
{
    if (use1==(1<<N)-1) {ans++; return;}//回溯 
    int p=((1<<N)-1)&(~(use1|use2|use3|f[ord]));
    while (p)
    {
        DFS(use1+lowbit(p),(use2+lowbit(p))<<1,(use3+lowbit(p))>>1,ord+1);
        p-=lowbit(p);//每次去掉最低位的一 
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cin>>N;
    for (int i=1; i<=N; i++)
    {
        string s=""; cin>>s;
        for (int p=0; p<N; p++)
            if (s[p]=='.') f[i]|=(1<<(N-p-1));
    	//f[i]就用来保存每一列有1的情况。 
    }
    DFS(0,0,0,1);
    cout<<ans<<endl;
    return 0;
}
// 1,1