#include<bits/stdc++.h>
using namespace std;

set<int> s;

int main(){
    int n;
    scanf("%d", &n);
    n++;
    while(n--){
        char c;
        cin>>c;
        if(c=='A'){
            int x;
            cin>>x;
            s.insert(x);
        }
        if(c=='R'){
            int x;
            cin>>x;
            if(s.count(x)){
                s.erase(x);
            }else{
                printf("NOT FOUND\n");
            }
        }
        if(c=='Q'){
            int x;
            cin>>x;
            if(s.count(x)){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
        if(c=='C'){
            s.clear();
        }
        if(c=='S'){
            printf("%d\n", s.size());
        }
        if(c=='M'){
            if(s.empty()) printf("ERROR\n");
            else{
                printf("%d\n", s.max_size());
            }
        }
    }
    return 0;
}