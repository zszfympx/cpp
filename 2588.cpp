#include<bits/stdc++.h>
#include <cstdio>
using namespace std;

char G[4][4];
set<set<char>> s[3];
void puts(set<char> t){
    if(t.size()==1) s[1].insert(t);
    else if(t.size()==2) s[2].insert(t);
}
int main(){
    for(int i = 1; i<=3; i++){
        for(int j = 1; j<=3; j++){
            cin>>G[i][j];
        }
    }
    for(int i = 1; i<=3; i++){
        set<char> h, l;
        for(int j = 1; j<=3; j++){
            h.insert(G[i][j]);
            l.insert(G[j][i]);
        }
        puts(h), puts(l);
    }
    set <char> d1, d2;
    d1.insert(G[0][0]); d1.insert(G[1][1]); d1.insert(G[2][2]);
    d2.insert(G[0][2]); d2.insert(G[1][1]); d2.insert(G[2][0]);
    puts(d1); puts(d2);
    printf("%d\n%d", s[1].size(), s[2].size());
    return 0;
}