#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin>>n>>s;
    for(int i = 1; i<=n; i++){
        bool flag = false;
        for(int j = 0; j<n-i+1; j++){
            int num = 0;
            string a = s.substr(j, i);
            for(int z = 0; z<n-i+1; z++){
                if(s.substr(z, i)==a) num++;
            }
            if(num>1) flag = true;
        }
        if(!flag){ printf("%d", i);return 0;}
    }
    return 0;
}