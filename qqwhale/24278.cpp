#include<bits/stdc++.h>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, int> names;
unordered_map<int, int> ids;

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        string s;
        int id;
        char male;
        cin>>s>>id>>male;
        names[s] = male=='F'?1:0;
        ids[id]=male=='F'?1:0;
    }
    int T;
    scanf("%d", &T);
    while(T--){
        string a, b;
        cin>>a>>b;
        int malea, maleb;
        if('0'<=a[0]&&a[0]<='9'){
            malea = ids[stoi(a)];
        }else{
            malea = names[a];
        }
        if('0'<=b[0]&&b[0]<='9'){
            maleb = ids[stoi(b)];
        }else{
            maleb = names[b];
        }
        if(maleb!=malea) puts("Y");
        else puts("N");
    }
    return 0;
}