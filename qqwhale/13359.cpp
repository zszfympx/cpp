#include<bits/stdc++.h>
using namespace std;

#define 整形 int

map<整形,整形>m;
整形 t,n,x;
char c;

整形 main(){
    cin>>t;
    while(t--){
        cin>>c;
        if(c=='A'){
            cin>>n>>x;
            m[n]=x;
        }
        else if(c=='R'){
            cin>>n;
            if(m.count(n)==0){
                printf("NOT FOUND\n");
            }
            else m.erase(n);
        }
        else if(c=='Q'){
            cin>>n;
            if(m.count(n)==0){
                printf("NOT FOUND\n"); 
            }
            else{
                cout<<m[n]<<'\n';
            }
        }
        else if(c=='C')m.clear();
        else if(c=='S')cout<<m.size()<<endl;
        else if(c=='D'){
            cin>>n;
            if(m.count(n)==0) printf("NOT FOUND\n");
            else if(m[n]==0) printf("CANNOT DECREASE\n");
            else m[n]--;
        }
    }
    return 0;
}
