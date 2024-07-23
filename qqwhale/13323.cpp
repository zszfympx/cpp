#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

vector<string> v;

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        string a;
        getline(cin, a);
        if(a[0]=='A'){
            string x;
            bool flag = false;
            for(int i = 1; i<a.size(); i++){
                if(a[i]==' '&&flag==false) continue;
                if(a[i]!=' ') flag = true;
                if(flag = true) x+=a[i];
            }
            v.push_back(x);
        }
        if(a[0]=='D'){
            if(v.empty()) printf("Warehouse is empty\n");
            else v.pop_back();
        }
        if(a[0]=='C') v.clear();
        if(a[0]=='I'){
            int x;

        }
    }
}