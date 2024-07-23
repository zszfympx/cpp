#include<bits/stdc++.h>
using namespace std;
const int maxn = 110;

int dp[maxn][maxn];

int main(){
    string s1, s2;
    cin>>s1>>s2;
    for(int i = 0; i<s1.length(); i++){
        for(int j = 0; j<s2.length(); j++){
            if(s1[i]==s2[j]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    printf("%d", dp[s1.length()-1][s2.length()-1]);
    return 0;
}