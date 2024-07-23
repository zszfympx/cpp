#include<bits/stdc++.h>
using namespace std;

int m, s, c, x;
vector<int> v, gap;

int main(){
    cin>>m>>s>>c;
    for(int i = 0; i<c; i++){
        cin>>x;
        v.push_back(x);
    }sort(v.begin(), v.end());
    for(int i = 0; i<c-1; i++){
        gap.push_back(v[i+1]-v[i]-1);
    }sort(gap.begin(), gap.end(), [](const int &x, const int &y){return x>y;});
    s = v[c-1]-v[0]+1;
    for(int i = 0; i<m-1&&i<=c-1; i++){
        s-=gap[i];
    }
    cout<<s;
}