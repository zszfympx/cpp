#include<bits/stdc++.h>
using namespace std;

vector<int> cows;
int n, a, ans;

bool check(int x){
    vector<int> b(cows);
    int sum = 0;
    for(int i = n-1; i>=0; i--){
        if(b[i]<x) return false;
        else if(b[i]==x) continue;
        else {
            sum+=b[i]-x;
            b[i-1] += b[i]-x;
        }
    }
    if(sum==ans) {printf("%d", ans); exit(0);}
    return sum>ans;
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        cows.push_back(a);
    }
    int l = 1, r=cows[n];
    while(l<=r){
        int mid = (l+r)>>1;
        if(check(mid)){
            ans = mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    printf("%d", ans);
}