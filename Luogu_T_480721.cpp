#include<bits/stdc++.h>
using namespace std;

map<int, int> rules;
map<int, int> days;

int main(){
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    for(int i = 0; i<m; i++){
        days.clear();
        for(int j = 0; j<n; j++){
            int x;
            scanf("%d", &x);
            days[x]++;
        }
        for(auto j:days){
            if(j.second>=n/2.0){
                rules[j.first]++;
            }
        }
    }

    for(auto it1 = rules.begin(), it2 = days.begin(); it1!=rules.end()&&it2!=rules.end(); it1++, it2++){
        auto i = *it1, j = *it2;
        i.first
    }

    if(rules[k]>=m/2.0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}