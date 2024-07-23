#include<bits/stdc++.h>
#include <cstdio>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        if(floor(sqrt(i))*floor(sqrt(i))==i){
            char c[10];
            sprintf(c, "%o", i);
            string s=c;
            string s1 = s;
            reverse(s1.begin(), s1.end());
            if(s1==s){
                printf("%d ", i);
            }
        }
    }
    return 0;
}