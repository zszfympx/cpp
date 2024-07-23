#include<bits/stdc++.h>
using namespace std;

stack<int> s;
int n, a;

int main(){
    scanf("%d", &n);
    while(n--){
        scanf("%d", &a);
        while(s.top()<a&&!s.empty()){
            printf("%d ", s.top());
            s.pop();
        }
        s.push(a);
    }
    while(!s.empty()){ printf("%d", s.top()); s.pop();}
    return 0;
}