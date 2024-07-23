#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    int ans = 0;
    vector<int> v1, v2;
    int len = min(s1.length(), s2.length());
    for(int i = s1.length(); i>=s1.length()-len-1; i--){
        v1.push_back(s1[i]='0');
    }
    for(int i = s2.length(); i>=s2.length()-len-1; i--){
        v2.push_back(s2[i]='0');
    }
    for(int i = 0; i<len; i++){
        if(v1[i]+v2[i]>=10) {
            ans++;
            if(i!=len-1) v1[i+1]++;
        }
    }
    printf("%d", ans);
    return 0;
}