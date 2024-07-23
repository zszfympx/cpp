#include<bits/stdc++.h>
using namespace std;

map<string, int> cows;

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        string a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a, a+3);
        string d;
        for(string s:a)d+=s; 
        cows[d]++;
    }
    int ans = 0;
    for(auto i:cows) ans = max(ans, i.second);
    printf("%d", ans);
    return 0;
}