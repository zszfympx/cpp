#include<bits/stdc++.h>
using namespace std;

queue<string> q;

int main(){
    int n;
    scanf("%d", &n);
    n++;
    while(n--){
        string s;
        getline(cin, s);
        if(s[0]=='F'){
            if(q.empty()){
                printf("Queue is Empty\n");
            }else{
                printf("%s\n", q.front().c_str());
            }
        }
        if(s[0]=='E'){
            string x = s.substr(2, s.length()-2);
            q.push(x);
        }
        if(s[0]=='N'){
            printf("%d\n", q.size());
        }
        if(s[0]=='L'){
            if(!q.empty()) q.pop();
        }
    }
    return 0;
}