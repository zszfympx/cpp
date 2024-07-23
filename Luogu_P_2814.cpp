#include<bits/stdc++.h>
using namespace std;

map<string, string> bcj;
string Find(string x){
    if(bcj[x]!=x)return bcj[x] = Find(bcj[x]);
    return x;
}

string s1, s2;

int main(){
    char op;
    while(cin>>op&&op!='$'){
        cin>>s1;
        if(op=='#'){
            s2 = s1;
            if(bcj[s1]=="") bcj[s1] = s1;
        }else if(op=='+'){
            bcj[s1] = s2;
        }else{
            cout<<s1<<" "<<Find(s1)<<"\n";
        }
    }
    return 0;
}