#include<bits/stdc++.h>
using namespace std;

int bcj[100010];
bool flag[100010];

int Find(int x){
    if(bcj[x]!=0||!flag[x]) return bcj[x] = Find(bcj[x]);
    return x;
}

void Merge(int x, int y){
    
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    memset(bcj, 0, sizeof bcj);
    memset(flag, 0, sizeof flag);
    while(m--){
        char op;
        op = getchar();

    }
}