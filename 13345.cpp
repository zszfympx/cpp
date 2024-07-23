#include<bits/stdc++.h>
#include <deque>
using namespace std;

deque<char> l, r;

int main(){
    string s; char op;
    cin>>s;
    for(int i = 1; i<=s.size(); i++){
        cin>>op;
        if(op=='R') r.push_back(s[i-1]);
        else l.push_front(s[i-1]);
    }
    for(char i:r){
        putchar(i);
    }
    for(char i:l){
        putchar(i);
    }
    return 0;
}