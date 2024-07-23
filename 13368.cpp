#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

typedef long long lld;

unordered_map<lld, int> p;

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<6; j++){
            int a, b, c, d, e, f;
            scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
            int t1 = a+b+c+d+e+f+a*b*c*d*e*f;
            int t2 = a*b+b*c+c*d+d*e+e*f+f*a;
            if(p.count(t1)&&p.count(t2)){
                printf("YES");
                return 0;
            }else{
                p[t1] = 1;
                p[t2] = 1;
            }
        }
    }
    printf("NO");
    return 0;
}