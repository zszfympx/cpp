#include<bits/stdc++.h>
using namespace std;

string s;
int n;

int main(){
    cin>>s>>n;
    while(n--){
        int len = s.size();
        for(int i = 0; i<len; i++){
            if(s[i]>s[i+1]){
                s.erase(s.begin()+i);
                break;
            }
        }
    }
    cout<<s;
    return 0;
}