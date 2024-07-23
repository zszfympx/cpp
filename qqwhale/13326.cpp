#include<bits/stdc++.h>
#include <cstdio>
using namespace std;

priority_queue<int, vector<int>, greater<int> > q;

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        string s;
        getline(cin, s);
        if(s[0]=='M') {
            if(q.empty()) {
                printf("ERORR\n");
            } else {
                printf("%d\n", q.top());
            }
        }
        if(s[0]=='I'){
            int x; char c;
            sscanf(s.c_str(), "%c %d", &c, &x);
            q.push(x);
        }
        if(s[0]=='P') {
            if(q.empty()){
                printf("ERROR\n");
            }else{
                q.pop();
            }
        }
        if(s[0]=='S'){
            printf("%d\n", q.size());
        }
    }
    return 0;
}