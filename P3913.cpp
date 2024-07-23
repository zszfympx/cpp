#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long lld;

set<PII> s;

int main(){
    lld n, k, r, c;
    scanf("%lld%lld", &n, &k);
    for(int i = 0; i<k; i++){
        scanf("%lld%lld", &r, &c);
        for(int i = 1; i<=n; i++){
            if(i!=c) s.insert({r, i});
            if(i!=r) s.insert({i, c});
        }
    }
    printf("%lld", s.size());
    return 0;
}