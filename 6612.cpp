#include<bits/stdc++.h>
using namespace std;
int n;
int dp[1010][1010];
string s1;
int main()
{
    cin>>n;
    while(n--){
    for(int i = 0; i<n; i++)
        for(int j = n-1; j >= 0; j--)
            if(s1[i] == s1[j])
                dp[i][j] = dp[i-1][j-1] + 1; 
            else
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]);  
    printf("%d", n-dp[n][n]+1);  }   
    return 0;           
}