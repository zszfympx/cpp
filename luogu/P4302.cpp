#include<bits/stdc++.h>
using namespace std;

const int maxn = 110;

string s;
int dp[maxn][maxn], lensz[110];

bool check(int l, int len){
    int mid = (l+l+len-1)>>1;
    for(int a = mid, b = mid; a>0&&b<l+len-1; a--, b++){
        if(s[a]!=s[b]||s[a]!=s[mid]) return false;
    }
    return true;
}

int main(){
    cin>>s;
    int lenn = s.length();
    memset(dp, 0xffffff, sizeof dp);
    for(int i = 0; i<lenn; i++){
        dp[i][i] = 1;
    }
    for(int i = 1; i<=100; i++){
        if(i<=9) lensz[i] = 1;
        if(10<=i&&i<=99) lensz[i] = 2;
        else lensz[i] = 3;
    }
    for(int len = 1; len<=lenn; len++){
        for(int i = 0, j=i+len-1; j<lenn; j++,i++){
            for(int k = i; k<j; k++){
                dp[i][j] = min(dp[i][j], dp[i][k]+dp[k+1][j]);
                int l = k-i+1;
                if(len%l>0) continue;
                if(check(i, l)) dp[i][j] = min(dp[i][j], lensz[len/l]+dp[i][k]+2);
            }
        }
    }
    printf("%d", -dp[0][lenn-1]);
    return 0;
}