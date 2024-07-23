#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    string maxn="", minn="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    for(int i = 0; i<4; i++){
        string a;
        cin>>a;
        if(a.length()<minn.length()) minn = a;
        if(a.length()>maxn.length()) maxn = a;
    }
    cout<<maxn<<endl<<minn;
    return 0;
}