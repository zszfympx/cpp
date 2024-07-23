#include<bits/stdc++.h>
#include <cstdio>
using namespace std;

map<string, int> names;
map<int, string> ids;
int bcj[50010];

int Find(int x){
    if(bcj[x]!=x) return bcj[x] = Find(bcj[x]);
    return x;
}

void Union(int x, int y){
    x = Find(x), y = Find(y);
    if(x!=y) bcj[x] = y;
}

int main(){
    int cnt = 0;
    while(true){
        char op;
        cin>>op;
        if(op=='#'){
            string a, b;
            getline(cin, a);
            getline(cin, b);
            b.erase(b.begin());
            if(names[a] == 0){
                names[a] = ++cnt;
                ids[cnt] = a;
            }
            if(names[b] == 0){
                names[b] = ++cnt;
                ids[cnt] = b;
            }
            Union(names[b], names[a]);
        }else if(op=='+'){
            string a, b;
            getline(cin, b);
            getline(cin, a);
            a.erase(a.begin());
            if(names[a] == 0){
                names[a] = ++cnt;
            }
            if(names[b] == 0){
                names[b] = ++cnt;
            }
            Union(names[b], names[a]);
        }else if(op=='?'){
            string a;
            getline(cin, a);
            cout<<a<<" "<<ids[Find(names[a])]<<"\n";
        }
        else{
            break;
        }
    }
    return 0;
}