#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        string s;
        cin>>s;
        int x;
        scanf("%d", &x);
        string s1[1010];
        int l = 0;
        for(int i = 0;i<x; i++){
            int a;
            scanf("%d", &a);
            s1[i] = s.substr(l, a-l);
            l = a;
        }
        s1[x] = s.substr(l, s.length()-l);
        int ans = 0;
        for(int i = 0; i<=x; i++){
            string s2 = s1[i];
            int cur = 0;
            while(s2.find("respect", cur)<s2.length()){
                ans++;
                cur = s2.find("respect", cur)+1;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}