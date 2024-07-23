#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    putchar('a'<=s[0]&&s[0]<='z'?s[0]-'a'+'A':s[0]);
    for(int i = 1; i<s.length(); i++){
        putchar('a'<=s[i]&&s[i]<='z'?s[i]:s[i]-'A'+'a');
    }
    return 0;
}